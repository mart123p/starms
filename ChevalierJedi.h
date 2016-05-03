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
    ~ChevalierJedi();

    /*
     *  Entrée: Le personnage à qui les dégats doivent être reçus
     *  Sortie: Objet Attaque qui contient tous les détails du sort projection
     *  Rôle: Permet au personnage passé en argument de recevoir des dégats, s'occupe aussi du coût de la force de l'attaque.
     */
    Attaque sortProjection(Personnage &cible);

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
    Attaque attaqueSabreLaser(Personnage &cible);

    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    virtual std::vector <std::string> getAttaques();

};


#endif //STARMS_CHEVALIERJEDI_H
