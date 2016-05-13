#ifndef LAB_PERSONNAGE_BOTTOMCONSOLE_H
#define LAB_PERSONNAGE_BOTTOMCONSOLE_H
#include <iostream>
#include <vector>
#include <string>
#include "display.h"

class BottomConsole {
public:
	BottomConsole(int color, char border);
	/*
	Entrée: numéro d'identification de la couleur
	Sortie: void
	Rôle: Un setter pour assigner le numéro d'identification de la couleur à l'attribut.
	*/
	void setCursorColor(unsigned short color);

	/*
	Entrée: null
	Sortie: void
	Rôle: Cette méthode vide la miniconsole. Elle est l'équivalent de cls sous le terminal de Windows et clear pour les meilleures systèmes ;)
	*/
	void clear();

	/*
	Entrée: Le contenu à afficher dans la console
	Sortie: void
	Rôle: On affiche le contenu de la string dans la mini console
	*/
	void print(std::string str);

	/*
	Entrée: Le contenu à afficher dans la console
	Sortie: void
	Rôle: On affiche le contenu du vector de string dans la mini console
	*/
	void print(std::vector<std::string> strings);

	/*
	Entrée: Le contenu de l'énoncé
	Sortie: bool du oui ou non
	Rôle: Affiche un menu avec l'énoncé et des boutons oui ou non
	*/
	bool yesNo(std::string title);

	/*
	Entrée: Le contenu à afficher dans la console. Title va en haut des choix
	Sortie: int représentant le choix du menu
	Rôle: Affiche un menu dans la mini console que l'on peut controller avec les flèches de son clavier
	*/
	int menu(std::vector<std::string> strings, std::string title);

	/*
	Entrée: Le nom du joueur
	Sortie: int représentant le choix du menu
	Rôle: Affiche un choix de personnages dans la mini console que l'on peut controller avec les flèches de son clavier
	*/
	int personnageChoix(std::string name);

	/*
	Entrée: null
	Sortie: string obtenu par le cin
	Rôle: Agit comme intermédiaire entre la mini console et cin
	*/
	std::string input(bool mandatory);

	/*
	Entrée: null
	Sortie: void
	Rôle: Retour à la ligne dans la mini console
	*/
	void nextLine();
private:
	/*
	Entrée: null
	Sortie: void
	Rôle: Méthode privé qui déplace le cursor avec le référentiel de la mini console
	*/
	void moveConsoleCursor();

	/*
	Entrée: L'id de personnage
	Sortie: void
	Rôle: Dessine le joueur lors de la selection
	*/
	void drawPersonnage(int personnage);

	char m_border;
	int m_color;
	int m_cursor_x;
	int m_cursor_y;
};

#endif