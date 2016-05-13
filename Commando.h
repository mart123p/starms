#ifndef STARMS_COMMANDO_H
#define STARMS_COMMANDO_H


#include "Personnage.h"
#include "Attaque.h"

class Commando : public Personnage {
public:
    /* Constructeur avec nom du personnage */
    Commando(std::string nom);
    /* Constructeur */
    Commando();
    /* Destructeur */
    virtual ~Commando();

    /*
     * Entrée: string le nom de l'attaque, le personnage à attaquer
     * Sortie: Retourne un objet attaque
     * Rôle: Exécuter les méthodes attaques des childs de personnages.
     */
    virtual Attaque doAttack(std::string attaque, Personnage* cible);
   
	/*
	 * Entrée: null
	 * Sortie: Retourne un string du nom du type de personnage
	 * Rôle: Retourner un type
	 */
	virtual std::string getType() const;

	/*
	 * Entrée: gauche ou droite de l'ecran
	 * Sortie: void
	 * Rôle: Dessine les personnages de la mini bibliotheque display.h
	 */
	virtual void drawPersonnage(int slot) const;

private:
    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueCoupDePiedRenverse(Personnage* cible);

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueCanonLaser(Personnage* cible);
};


#endif //STARMS_COMMANDO_H
