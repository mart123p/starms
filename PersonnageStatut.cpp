#include "PersonnageStatut.h"
PersonnageStatut::PersonnageStatut(Personnage*& personnage,int joueur): m_personnage(personnage){
	switch(joueur){
	case 0:
		m_console_x = 4;
		m_console_y = 1;
		break;
	case 1:
		m_console_x = 54;
		m_console_y = 1;
		break;
	}
	drawBase();
}

PersonnageStatut::~PersonnageStatut(){
	delete m_personnage;
	m_personnage = 0;
}

void PersonnageStatut::refresh(){
	drawBase();
}

void PersonnageStatut::drawBase(){
	//On dessine le rectangle qui va etre par dessus le personnage
	char border(178);
	drawRectangle(m_console_x, m_console_y, 20, 5,240,border,true,255);
	//On met le nom en haut de la bulle
	setcolor(240);
	std::string nom = m_personnage->getNom();
	moveCursorStatut(10 - (nom.size()/2),1);
	std::cout << nom;
	//On dessine les elements de vie et de mana
	drawVie();
	drawForce();
}

void PersonnageStatut::drawVie(){
	char block(219);
	setcolor(240);
	moveCursorStatut(1,2);
	std::cout << "Vie ";
	
	//On dessine la barre
	setcolor(250);
	int barvalue(((double)m_personnage->getVie() / (double)m_personnage->getVieMax())*10);
	if(barvalue == 0 && m_personnage->getVie() > 0)
		barvalue = 1;
	if(barvalue <= 3)
		setcolor(252);
	else if (barvalue <= 6)
		setcolor(254);
	
	for(int i(0); i < barvalue; i++){
		moveCursorStatut(6+i,2);
		std::cout << block;
	}
	//On ecrit le numero
	moveCursorStatut(17,2);
	setcolor(240);
	std::cout << m_personnage->getVie();
}

void PersonnageStatut::drawForce(){
	char block(219);
	setcolor(240);
	moveCursorStatut(1,3);
	std::cout << "Force";

	//On dessine la barre
	setcolor(253);
	int barvalue(((double)m_personnage->getForce() / (double)m_personnage->getForceMax())*10);
	if(barvalue == 0 && m_personnage->getForce() > 0)
		barvalue = 1;
	for(int i(0); i < barvalue; i++){
		moveCursorStatut(6+i,3);
		std::cout << block;
	}
	//On ecrit le numero
	moveCursorStatut(17,3);
	setcolor(240);
	std::cout << m_personnage->getForce();
	
}

void PersonnageStatut::moveCursorStatut(int x, int y){
	moveCursorTo(m_console_x+x,m_console_y+y);
}