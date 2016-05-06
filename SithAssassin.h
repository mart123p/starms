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
private:
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
};


#endif //STARMS_SITHASSASSIN_H
