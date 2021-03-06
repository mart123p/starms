#include <cstdlib>
#include <iostream>
#include "Attaque.h"

Attaque::Attaque(): m_nom("pas de nom"), m_degats(0), m_coutsDeForce(0), m_pourcentageReussite(0),m_guerison(0), m_succes(false),m_forceActuelle(0) {

}
Attaque::Attaque(std::string nom, int degats, int coutsDeForce, int pourcentageReussite, int forceActuelle) :
        m_nom(nom),
        m_degats(degats),
        m_coutsDeForce(coutsDeForce),
		m_guerison(0),
		m_forceActuelle(forceActuelle),
        m_pourcentageReussite(pourcentageReussite){
    int randomVar((std::rand()%100)+1);
    m_succes = randomVar <= m_pourcentageReussite;
}
Attaque::~Attaque() {

}
bool Attaque::isSuccessfulAttaque() const {
	if( (m_forceActuelle - m_coutsDeForce) < 0)
		return false;

    return m_succes;
}
int Attaque::getDegats() const {
    if(m_succes){
        return m_degats;
    }else{
        return 0;
    }

}
int Attaque::getCoutsDeForce() const {
    return m_coutsDeForce;
}
std::string Attaque::getNom() const {
    return m_nom;
}

void Attaque::setGuerison(int guerison){
	m_guerison = guerison;
}

int Attaque::getGuerison() const{
	return m_guerison;
}
