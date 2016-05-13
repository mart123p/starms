#ifndef STARMS_CHEVALIERJEDI_H
#define STARMS_CHEVALIERJEDI_H


#include "Personnage.h"
#include "Attaque.h"

class ChevalierJedi : public Personnage {
public:
    /* Constructeur avec nom */
    ChevalierJedi(std::string nom);
    /* Constructeur sans nom */
    ChevalierJedi();
    /* Destructeur */
    virtual ~ChevalierJedi();

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
     *  Entrée: Le personnage à qui les dégats doivent être reçus
     *  Sortie: Objet Attaque qui contient tous les détails du sort projection
     *  Rôle: Permet au personnage passé en argument de recevoir des dégats, s'occupe aussi du coût de la force de l'attaque.
     */
    Attaque sortProjection(Personnage* cible);

    /*
     *  Entrée: null
     *  Sortie: Objet Attaque qui contient tous les détails du sort
     *  Rôle: Permet au personnage de se guérir, s'occupe aussi du coût de la force.
     */
    Attaque sortGuerison();

    /*
     *  Entrée: Le personnage à qui les dégats doivent être reçus
     *  Sortie: Objet Attaque qui contient tous les détails de l'attaque sabre laser
     *  Rôle: Permet au personnage passé en argument de recevoir des dégats, s'occupe aussi du coût de la force.
     */
    Attaque attaqueSabreLaser(Personnage* cible);

};


#endif //STARMS_CHEVALIERJEDI_H
