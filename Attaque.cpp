#include <cstdlib>
#include <iostream>
#include <ctime>
#include "Attaque.h"

Attaque::Attaque() {

}
Attaque::Attaque(std::string nom, int degats, int coutsDeForce, int pourcentageReussite) :
        m_nom(nom),
        m_degats(degats),
        m_coutsDeForce(coutsDeForce),
        m_pourcentageReussite(pourcentageReussite){

}
Attaque::~Attaque() {

}
bool Attaque::successfullAttaque() const {
    int randomVar((std::rand()%100)+1);
    return randomVar <= m_pourcentageReussite;
}
int Attaque::getDegats() const {
    return m_degats;
}
int Attaque::getCoutsDeForce() const {
    return m_coutsDeForce;
}
std::string Attaque::getNom() const {
    return m_nom;
}
