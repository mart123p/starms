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
    /* Constructeur avec nom */
    Personnage(std::string nom);
    /* Constructeur sans nom */
    Personnage();
    /* Destructeur */
    ~Personnage();
    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    virtual std::vector <std::string> getAttaques();
    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    static int lancerDe(int nbDe, int nbFace);
    void recevoirDegats(int degats);
    virtual void attaquer(Personnage &cible, int degats);

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
