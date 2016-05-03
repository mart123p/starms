#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Personnage.h"

Personnage::Personnage() {

}
Personnage::Personnage(std::string nom) :
    m_nom(nom){

}
Personnage::~Personnage() {

}
std::vector <std::string> Personnage::getAttaques() {

}
int Personnage::lancerDe(int nbDe, int nbFace) {
    std::srand((unsigned int) std::time(0));
    int total(0);
    for(int i = 1; i <= nbDe; i++){
        total += ((std::rand()%nbFace)+1);
    }
    return total;
}
void Personnage::recevoirDegats(int degats) {
    m_vie -= degats;
}
void Personnage::attaquer(Personnage &cible, int degats) {
    cible.recevoirDegats(degats);
}
int Personnage::getVie() {
    return m_vie;
}
int Personnage::getVieMax() {
    return m_vieMax;
}
int Personnage::getForce() {
    return m_force;
}
int Personnage::getForceMax() {
    return m_forceMax;
}
std::string Personnage::getNom() {
    return m_nom;
}