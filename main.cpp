#include <iostream>
#include <cstdlib>
#include <ctime>
#include "PersonnageStatut.h"
#include "ChevalierJedi.h"
#include "Personnage.h"
#include "Commando.h"
#include "Attaque.h"
#include "SithAssassin.h"
#include "SorcierSith.h"
#include "display.h"
#include "BottomConsole.h"

using namespace std;

int main() {
    srand(time(NULL));
	playTheme();
	present();
	
	system("cls");
	drawTitleBig(0,0);
	char border(176);
	BottomConsole console(116,border);
	string nomJoueurs[2];

	if(!console.yesNo("Voulez vous jouer avec de la musique?")){
		stopTheme();
	}
	console.clear();

	for(int i(0); i < 2; i++){
		stringstream ss;
		ss << "Joueur "<< (i+1) << " choisissez le nom du personnage: ";
		console.print(ss.str());
		nomJoueurs[i] = console.input(true);
		console.clear();
	}


	bool running(false);

	
	do{
		setcolor(0);
		system("cls");
		drawTitleBig(0,0);

		//Creation des personnages
		Personnage* joueursPerso[2];
		console.clear();
		for(int i(0); i < 2; i++){
			//Choix des personnages
			switch(console.personnageChoix(nomJoueurs[i])){
			case 0:
				joueursPerso[i] = new ChevalierJedi(nomJoueurs[i]);
				break;
			case 1:
				joueursPerso[i] = new Commando(nomJoueurs[i]);
				break;
			case 2:
				joueursPerso[i] = new SorcierSith(nomJoueurs[i]);
				break;
			case 3:
				joueursPerso[i] = new SithAssassin(nomJoueurs[i]);
				break;
			}
			console.clear();
		}

	


	//On decide qui va jouer en premier
	
		if((joueursPerso[0]->getType() == "sith assassin" && 
			joueursPerso[1]->getType() == "sith assassin" &&
			Personnage::lancerDe(1,2) == 2) ||
			(joueursPerso[1]->getType() == "sith assassin" && 
			joueursPerso[0]->getType() != "sith assassin") || 
			(Personnage::lancerDe(1,2) == 2 &&
			joueursPerso[0]->getType() != "sith assassin")) { //Si une de ces conditions est remplies l'array doit etre inverse
		
			string nomJoueurs2[2];
			Personnage* joueursPerso2[2];
			for(int i(0); i < 2; i++){
				joueursPerso2[i] = joueursPerso[i];
				nomJoueurs2[i] = nomJoueurs[i];
			}
			int j(0);
			for(int i(1); i >= 0; i--){
				joueursPerso[i] = joueursPerso2[j];
				nomJoueurs[i] = nomJoueurs2[j];
				j++;
			}

		}
		setcolor(0);
		system("cls");
		drawTitleBig(0,0);

		//Initialisation des Status
		PersonnageStatut* persoStatus[2];


		//On presente les personnages et on les dessines
		for(int i(0); i < 2; i++){
			persoStatus[i] = new PersonnageStatut(joueursPerso[i], i);
			//On dessine le personnage
			joueursPerso[i]->drawPersonnage(i);
			console.clear();
			console.print("Bonjour mon nom est " + joueursPerso[i]->getNom() + ". Je suis un " + joueursPerso[i]->getType()+ ".");
			console.nextLine();
			stringstream ss;
			ss << "J'ai " << joueursPerso[i]->getVieMax() << " points de vie et " << joueursPerso[i]->getForceMax() << " points de force.";
			console.print(ss.str());
			console.nextLine();

			system("PAUSE");
		}
		console.clear();
		console.print("Pour commencer le combat");
		console.nextLine();
		system("PAUSE");

		console.clear();


		//On cree la variable log pour mettre toute l'information
		vector<vector<string>> log;
		int round(0);

		while(joueursPerso[0]->isAlive() && joueursPerso[1]->isAlive()){
			moveCursorTo(0,0);
			setcolor(8);
			round++;
			cout << "Ronde: " << round;
				for(int i(0); i < 2; i++){
					int j;
					if(i == 0)
						j = 1;
					else
						j = 0;
				
					bool skipTurn(false); //Variable utilise pour le sort aveuglement 
					Attaque attaque;
				
					attaque=joueursPerso[i]->doAttack(joueursPerso[i]->getAttaques()[console.menu(joueursPerso[i]->getAttaques(),joueursPerso[i]->getNom() + ", choisissez une attaque:")],joueursPerso[j]);
					persoStatus[i]->refresh();//Mise a jour des barres de vie
					persoStatus[j]->refresh();
					console.clear();

				
					vector<string> resume;
					if(attaque.getGuerison() == 0){	
						stringstream ss;
						ss << joueursPerso[i]->getNom() << " a attaqu\x82 " << joueursPerso[j]->getNom() << " avec " << attaque.getNom() << "."; 
						resume.push_back(ss.str());
						ss.clear();
						ss.str(string());
						if(attaque.isSuccessfulAttaque()){
							ss << "Cette attaque a cout\x82 " << attaque.getCoutsDeForce() << " points de force et " << attaque.getDegats() << " en d\202gats";
							if(attaque.getNom() == "Aveuglement"){
								resume.push_back(ss.str());
								ss.clear();
								ss.str(string());
								ss <<  joueursPerso[j]->getNom() << " est aveugl\x82, il devra passer son tour.";
								skipTurn = true;	
							}

						}else{
							ss << "Cette attaque a \202chou\x82";
						}
						resume.push_back(ss.str());
					
					
					}else{
						stringstream ss;
						ss << joueursPerso[i]->getNom() << " a utilis\x82 le sort de g\x82urison il a obtenu " << attaque.getGuerison() << " points de vie.";
						resume.push_back(ss.str());
						ss.clear();
						ss.str(string());
						ss << "Ce sort lui a cout\x82 " << attaque.getCoutsDeForce() << " de force.";
						resume.push_back(ss.str());

					}
					console.clear();
					console.print(resume);
					console.nextLine();
					system("pause");
				
					stringstream ss;
					ss << "Ronde:" << round << " ";
					resume[0] = ss.str() + resume[0];
					log.push_back(resume);
					console.clear();

					if(!joueursPerso[j]->isAlive() || skipTurn){
						break;
					}

				}
			
		}
		console.clear();

		setcolor(8);
		system("cls");
		moveCursorTo(0,0);
		cout << "Voici le r\x82sum\x82 du combat: " << endl;
		//On affiche le resume
		for(int i(0); i < log.size(); i++){
			for(int j(0); j < log[i].size(); j++){
				cout << log[i][j] << endl;
			}
			cout << endl;
		}

		system("pause");
		
		
		//On affiche l'ecran final
		system("cls");
		moveCursorTo(0,0);
		cout << "Ronde: " << round;
		console.clear();


		for(int i(0); i < 2; i++){
			persoStatus[i]->refresh();
			joueursPerso[i]->drawPersonnage(i);
		}

				if(!joueursPerso[0]->isAlive()){
			console.print("F\x82licitations, " + joueursPerso[1]->getNom() + " tu es le vainqueur.");
		}else{
			console.print("F\x82licitations, " + joueursPerso[0]->getNom() + " tu es le vainqueur");
		}

		console.nextLine();
		system("pause");
		console.clear();

		running = console.yesNo("Voulez-vous recommencer le combat?");

		//On suprime les pointeurs
		for(int i(0); i < 2; i++){
			delete joueursPerso[i];
			joueursPerso[i] = 0;

			delete persoStatus[i];
			persoStatus[i] = 0;
		}

	

	}while(running);


    return 0;
}