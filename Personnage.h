//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_PERSONNAGE_H
#define STARMS_PERSONNAGE_H


#include <string>
#include <iostream>
#include <vector>
class Personnage {
public:
    Personnage(std::string nom);
    ~Personnage();
    std::vector <std::string> getAttaques();
    static int lancerDe(int nbDe, int nbFace);
    void recevoirDegats(int degats);
    void attaquer(Personnage &cible);

    int getVie();
    int getVieMax();
    int getForce();
    int getForceMax();
    std::string getNom();

protected:
    int m_vieMax;
    int m_forceMax;
    int m_vie;
    int m_force;
    std::string m_nom;
};


#endif //STARMS_PERSONNAGE_H
