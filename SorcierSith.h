//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_SORCIERSITH_H
#define STARMS_SORCIERSITH_H


#include "Personnage.h"
#include "Attaque.h"

class SorcierSith : public Personnage {
public:
    SorcierSith();
    SorcierSith(std::string nom);
    ~SorcierSith();
    Attaque attaqueDechargeElectrique(Personnage &cible);
    Attaque attaqueCouteauLaser(Personnage &cible);
    virtual std::vector <std::string> getAttaques();
};


#endif //STARMS_SORCIERSITH_H
