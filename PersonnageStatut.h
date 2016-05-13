#ifndef LAB_PERSONNAGE_PERSONNAGESTATUT_H
#define LAB_PERSONNAGE_PERSONNAGESTATUT_H
#include "Personnage.h"
#include "display.h"
#include <iostream>
class PersonnageStatut{
public:
	/*
	Entrée: l'objet personnage, numéro de joueur
	Sortie: rien (constructeur)
	Rôle: Initialiser les valeurs en fonction du numéro de joueur
	*/
	PersonnageStatut(Personnage*& personnage, int joueur);
	/*Destructeur*/
	~PersonnageStatut();
	
	/*
	Entrée: null
	Sortie: void
	Rôle: Met à jour les informations du statut du personnage
	*/
	void refresh();

private:
	/*
	Entrée: position x, position y
	Sortie: void
	Rôle: Déplacement du curseur dans le référentiel du rectangle de statut
	*/
	void moveCursorStatut(int x, int y);
	
	/*
	Entrée: null
	Sortie: void
	Rôle: Dessine la barre de froce du personnage
	*/
	void drawForce();
	
	/*
	Entrée: null
	Sortie: void
	Rôle: Dessine la barre de vie du personnage
	*/
	void drawVie();

	/*
	Entrée: null
	Sortie: void
	Rôle: Dessine tous les éléments informatifs sur le personnage.
	*/
	void drawBase();


	Personnage*& m_personnage;
	int m_console_x;
	int m_console_y;
};
#endif