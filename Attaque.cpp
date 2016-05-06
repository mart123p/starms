#include <cstdlib>
#include <iostream>
#include "Attaque.h"

Attaque::Attaque(): m_nom("pas de nom"), m_degats(0), m_coutsDeForce(0), m_pourcentageReussite(0), m_succes(false) {

}
Attaque::Attaque(std::string nom, int degats, int coutsDeForce, int pourcentageReussite) :
        m_nom(nom),
        m_degats(degats),
        m_coutsDeForce(coutsDeForce),
        m_pourcentageReussite(pourcentageReussite){
    int randomVar((std::rand()%100)+1);
    m_succes = randomVar <= m_pourcentageReussite;
}
Attaque::~Attaque() {

}
bool Attaque::isSuccessfulAttaque() const {
    return m_succes;
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
