//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_CHEVALIERJEDI_H
#define STARMS_CHEVALIERJEDI_H


#include "Personnage.h"
#include "Attaque.h"

class ChevalierJedi : public Personnage {
public:
    ChevalierJedi(std::string nom);
    ChevalierJedi();
    ~ChevalierJedi();
    Attaque attaqueProjection(Personnage &cible);
    Attaque attaqueGuerison(Personnage &cible);
    Attaque attaqueSabreLaser(Personnage &cible);
    virtual std::vector <std::string> getAttaques();

};


#endif //STARMS_CHEVALIERJEDI_H
