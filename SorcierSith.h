#ifndef STARMS_SORCIERSITH_H
#define STARMS_SORCIERSITH_H


#include "Personnage.h"
#include "Attaque.h"

class SorcierSith : public Personnage {
public:
    /* Constructeur */
    SorcierSith();
    /* Constructeur avec nom*/
    SorcierSith(std::string nom);
    /* Destructeur */
    ~SorcierSith();

    /*
     * Entrée: string le nom de l'attaque, le personnage à attaquer
     * Sortie: Retourne un objet attaque
     * Rôle: Exécuter les méthodes attaques des childs de personnages.
     */
    virtual Attaque doAttack(std::string attaque, Personnage &cible);

protected:
    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contient tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueDechargeElectrique(Personnage &cible);

    /*
     * Entrée: Personnage que nous voulons attaquer
     * Sortie: Retourne l'objet attaque qui contient tous l'information nécessaire
     * Rôle: Permet au personnage passé en argument de reçevoir des dégats, s'occupe aussi du coût de la force
     */
    Attaque attaqueCouteauLaser(Personnage &cible);
};


#endif //STARMS_SORCIERSITH_H
