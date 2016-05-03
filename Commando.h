//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_COMMANDO_H
#define STARMS_COMMANDO_H


#include "Personnage.h"
#include "Attaque.h"

class Commando : public Personnage {
public:
    Commando(std::string nom);
    Commando();
    ~Commando();
    Attaque attaqueCoupDePiedRenverse(Personnage &cible);
    Attaque attaqueCanonLaser(Personnage &cible);
    virtual std::vector <std::string> getAttaques();
};


#endif //STARMS_COMMANDO_H
