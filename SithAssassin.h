#ifndef STARMS_SITHASSASSIN_H
#define STARMS_SITHASSASSIN_H


#include "SorcierSith.h"

class SithAssassin : public SorcierSith {
public:
    /* Constructeur */
    SithAssassin();
    /* Constructeur avec un nom */
    SithAssassin(std::string nom);
    /* Destructeur */
    ~SithAssassin();

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueAveuglement(Personnage &cible);

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contien tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueSabreLaserDouble(Personnage &cible);

    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    virtual std::vector <std::string> getAttaques();
};


#endif //STARMS_SITHASSASSIN_H
