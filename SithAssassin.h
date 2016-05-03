//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_SITHASSASSIN_H
#define STARMS_SITHASSASSIN_H


#include "SorcierSith.h"

class SithAssassin : public SorcierSith {
public:
    SithAssassin();
    SithAssassin(std::string nom);
    ~SithAssassin();
    Attaque attaqueAveuglement(Personnage &cible);
    Attaque attaqueSabreLaserDouble(Personnage &cible);
    virtual std::vector <std::string> getAttaques();
};


#endif //STARMS_SITHASSASSIN_H
