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
	Entr�e: num�ro d'identification de la couleur
	Sortie: void
	R�le: Un setter pour assigner le num�ro d'identification de la couleur � l'attribut.
	*/
	void setCursorColor(unsigned short color);

	/*
	Entr�e: null
	Sortie: void
	R�le: Cette m�thode vide la miniconsole. Elle est l'�quivalent de cls sous le terminal de Windows et clear pour les meilleures syst�mes ;)
	*/
	void clear();

	/*
	Entr�e: Le contenu � afficher dans la console
	Sortie: void
	R�le: On affiche le contenu de la string dans la mini console
	*/
	void print(std::string str);

	/*
	Entr�e: Le contenu � afficher dans la console
	Sortie: void
	R�le: On affiche le contenu du vector de string dans la mini console
	*/
	void print(std::vector<std::string> strings);

	/*
	Entr�e: Le contenu de l'�nonc�
	Sortie: bool du oui ou non
	R�le: Affiche un menu avec l'�nonc� et des boutons oui ou non
	*/
	bool yesNo(std::string title);

	/*
	Entr�e: Le contenu � afficher dans la console. Title va en haut des choix
	Sortie: int repr�sentant le choix du menu
	R�le: Affiche un menu dans la mini console que l'on peut controller avec les fl�ches de son clavier
	*/
	int menu(std::vector<std::string> strings, std::string title);

	/*
	Entr�e: Le nom du joueur
	Sortie: int repr�sentant le choix du menu
	R�le: Affiche un choix de personnages dans la mini console que l'on peut controller avec les fl�ches de son clavier
	*/
	int personnageChoix(std::string name);

	/*
	Entr�e: null
	Sortie: string obtenu par le cin
	R�le: Agit comme interm�diaire entre la mini console et cin
	*/
	std::string input(bool mandatory);

	/*
	Entr�e: null
	Sortie: void
	R�le: Retour � la ligne dans la mini console
	*/
	void nextLine();
private:
	/*
	Entr�e: null
	Sortie: void
	R�le: M�thode priv� qui d�place le cursor avec le r�f�rentiel de la mini console
	*/
	void moveConsoleCursor();

	/*
	Entr�e: L'id de personnage
	Sortie: void
	R�le: Dessine le joueur lors de la selection
	*/
	void drawPersonnage(int personnage);

	char m_border;
	int m_color;
	int m_cursor_x;
	int m_cursor_y;
};

#endif