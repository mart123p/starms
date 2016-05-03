//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_ATTAQUE_H
#define STARMS_ATTAQUE_H


#include <string>

class Attaque {
public:
    Attaque();
    Attaque(std::string nom, int degats, int coupsDeForce, int pourcentageReussite);
    bool successfullAttaque();
    int getDegats();
    int getCoupsDeForce();
    std::string getNoM();

private:
    int m_degats;
    int m_coupsDeForce;
    int m_pourcentageReussite;
    std::string m_nom;
};


#endif //STARMS_ATTAQUE_H
