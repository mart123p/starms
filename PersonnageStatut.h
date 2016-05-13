#ifndef LAB_PERSONNAGE_PERSONNAGESTATUT_H
#define LAB_PERSONNAGE_PERSONNAGESTATUT_H
#include "Personnage.h"
#include "display.h"
#include <iostream>
class PersonnageStatut{
public:
	/*
	Entr�e: l'objet personnage, num�ro de joueur
	Sortie: rien (constructeur)
	R�le: Initialiser les valeurs en fonction du num�ro de joueur
	*/
	PersonnageStatut(Personnage*& personnage, int joueur);
	/*Destructeur*/
	~PersonnageStatut();
	
	/*
	Entr�e: null
	Sortie: void
	R�le: Met � jour les informations du statut du personnage
	*/
	void refresh();

private:
	/*
	Entr�e: position x, position y
	Sortie: void
	R�le: D�placement du curseur dans le r�f�rentiel du rectangle de statut
	*/
	void moveCursorStatut(int x, int y);
	
	/*
	Entr�e: null
	Sortie: void
	R�le: Dessine la barre de froce du personnage
	*/
	void drawForce();
	
	/*
	Entr�e: null
	Sortie: void
	R�le: Dessine la barre de vie du personnage
	*/
	void drawVie();

	/*
	Entr�e: null
	Sortie: void
	R�le: Dessine tous les �l�ments informatifs sur le personnage.
	*/
	void drawBase();


	Personnage*& m_personnage;
	int m_console_x;
	int m_console_y;
};
#endif