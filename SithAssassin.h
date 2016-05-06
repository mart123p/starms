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
     * Entrée: string le nom de l'attaque, le personnage à attaquer
     * Sortie: Retourne un objet attaque
     * Rôle: Exécuter les méthodes attaques des childs de personnages.
     */
    virtual Attaque doAttack(std::string attaque, Personnage &cible);
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
