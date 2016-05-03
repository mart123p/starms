//
// Created by Martin Pouliot on 2016-05-03.
//

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
    ~Commando();

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueCoupDePiedRenverse(Personnage &cible);

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueCanonLaser(Personnage &cible);

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    virtual std::vector <std::string> getAttaques();
};


#endif //STARMS_COMMANDO_H
