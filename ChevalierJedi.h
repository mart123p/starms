//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_CHEVALIERJEDI_H
#define STARMS_CHEVALIERJEDI_H


#include "Personnage.h"
#include "Attaque.h"

class ChevalierJedi : public Personnage {
public:
    ChevalierJedi(std::string);
    ChevalierJedi();
    ~ChevalierJedi();
    Attaque attaqueProjection(Personnage &cible);
private:

};


#endif //STARMS_CHEVALIERJEDI_H
