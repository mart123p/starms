#ifndef STARMS_PERSONNAGE_H
#define STARMS_PERSONNAGE_H


#include <string>
#include <iostream>
#include <vector>
#include "Attaque.h"
#include "display.h"

class Personnage {
public:
    /* Constructeur avec nom */
    Personnage(std::string nom);
    /* Constructeur sans nom */
    Personnage();
    /* Destructeur */
    virtual ~Personnage();

    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    std::vector <std::string> getAttaques() const;

    /*
     * Entrée: Le nombre de dés à lancer ainsi que le nombre de faces par dé
     * Sortie: Retourne la valeur des dés additionés.
     * Rôle: Cette fonction est uttilisé pour tous les attaques et les caractérisqtiques de tous les personnages
     */
    static int lancerDe(int nbDe, int nbFace);

    /*
     * Entrée: Le nombre de dégats à reçevoir de l'opposant
     * Sortie: Aucune
     * Rôle: Permet à chaque personnage de reçevoir des dégats
    */
    void recevoirDegats(int degats);

	 /*
     * Entrée: Aucune
     * Sortie: boolean si le personnage est vivant
     * Rôle: Determiner si le personnage est vivant
    */
	bool isAlive() const;

    /*
     * Entrée: Aucune
     * Sortie: Le nombre de vie du personnage
     * Rôle: Retourne le nombre de vie restante
    */
    int getVie() const;

    /*
     * Entrée: Aucune
     * Sortie: Le nombre de vie de départ du personnage
     * Rôle: Retourne le nombre de vie que le personnage avait au départ
    */
    int getVieMax() const;

    /*
     * Entrée: Aucune
     * Sortie: Le nombre de force du personnage
     * Rôle: Retourne le nombre de force du personnage
    */
    int getForce() const;

    /*
     * Entrée: Aucune
     * Sortie: Le nombre de force de départ du personnage
     * Rôle: Retourne le nombre de force que le personnage avait au départ
    */
    int getForceMax() const;

    /*
     * Entrée: Aucune
     * Sortie: Le nom du personnage
     * Rôle: Retourne le nom du personnage présent
    */
    std::string getNom() const;

    /*
     * Entrée: string le nom de l'attaque, le personnage à attaquer
     * Sortie: Retourne un objet attaque
     * Rôle: Exécuter les méthodes attaques des childs de personnages.
     */
    virtual Attaque doAttack(std::string attaque, Personnage* cible) = 0;

	/*
	 * Entrée: null
	 * Sortie: Retourne un string du nom du type de personnage
	 * Rôle: Retourner un type
	 */
	virtual std::string getType() const = 0;

	/*
	 * Entrée: gauche ou droite de l'ecran
	 * Sortie: void
	 * Rôle: Dessine les personnages de la mini bibliotheque display.h
	 */
	virtual void drawPersonnage(int slot) const = 0;

protected:
    int m_vieMax;
    int m_forceMax;
    int m_vie;
    int m_force;
    std::string m_nom;
    std::vector <std::string> m_attaques;

};


#endif //STARMS_PERSONNAGE_H
