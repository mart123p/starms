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
bool Attaque::successfullAttaque() {
    std::srand(std::time(0));
    int randomVar((std::rand()%100)+1);
    return randomVar <= m_pourcentageReussite;
}
int Attaque::getDegats() {
    return m_degats;
}
int Attaque::getCoutsDeForce() {
    return m_coutsDeForce;
}
std::string Attaque::getNom() {
    return m_nom;
}
