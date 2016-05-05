#include "ChevalierJedi.h"

ChevalierJedi::ChevalierJedi() {
    m_vieMax = lancerDe(5, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(2,20);
    m_force = m_forceMax;
    m_nom = "Jean-Pierre";

}
ChevalierJedi::ChevalierJedi(std::string nom) : Personnage(nom) {
    m_vieMax = lancerDe(5, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(2,20);
    m_force = m_forceMax;

}
ChevalierJedi::~ChevalierJedi() {

}
Attaque ChevalierJedi::sortProjection(Personnage &cible) {
    Attaque attaque("Sort Projection",lancerDe(2,8),lancerDe(1,10),80);
    if(attaque.successfullAttaque()){
        m_force -= attaque.getCoutsDeForce();
        cible.recevoirDegats(attaque.getDegats());
    }else{

    }

}
Attaque ChevalierJedi::sortGuerison() {

}
Attaque ChevalierJedi::attaqueSabreLaser(Personnage &cible) {

}
std::vector <std::string> ChevalierJedi::getAttaques() const{

}