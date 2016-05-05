#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Personnage.h"

Personnage::Personnage() :
    m_nom("Carl"),
    m_forceMax(0),
    m_force(0){
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
}
Personnage::Personnage(std::string nom) :
    m_nom(nom),
    m_forceMax(0),
    m_force(0){
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
}
Personnage::~Personnage() {

}
std::vector <std::string> Personnage::getAttaques() const {

}
int Personnage::lancerDe(int nbDe, int nbFace) {
    int total(0);
    for(int i = 1; i <= nbDe; i++){
        total += ((std::rand()%nbFace)+1);
    }
    return total;
}
void Personnage::recevoirDegats(int degats) {
    m_vie -= degats;
}
int Personnage::getVie() const {
    return m_vie;
}
int Personnage::getVieMax() const {
    return m_vieMax;
}
int Personnage::getForce() const {
    return m_force;
}
int Personnage::getForceMax() const {
    return m_forceMax;
}
std::string Personnage::getNom() const{
    return m_nom;
}