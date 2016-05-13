#include "ChevalierJedi.h"

ChevalierJedi::ChevalierJedi() : Personnage() {
    m_vieMax = lancerDe(5, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(2,20);
    m_force = m_forceMax;
    m_nom = "Jean-Pierre";

    m_attaques.push_back("Sort projection");
    m_attaques.push_back("Sort gu\x82rison");
    m_attaques.push_back("Arme sabre laser");

}
ChevalierJedi::ChevalierJedi(std::string nom) : Personnage(nom) {
    m_vieMax = lancerDe(5, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(2,20);
    m_force = m_forceMax;

    m_attaques.push_back("Sort projection");
    m_attaques.push_back("Sort gu\x82rison");
    m_attaques.push_back("Arme sabre laser");

}
ChevalierJedi::~ChevalierJedi() {

}

Attaque ChevalierJedi::doAttack(std::string attaque, Personnage* cible) {
    if(attaque == "Sort projection"){
        return sortProjection(cible);
    }else if(attaque =="Sort gu\x82rison"){
        return sortGuerison();
    }else if(attaque == "Arme sabre laser"){
        return attaqueSabreLaser(cible);
    }else{
        return Attaque();
    }
}

Attaque ChevalierJedi::sortProjection(Personnage* cible) {
    Attaque attaque("Sort Projection",lancerDe(2,8),lancerDe(1,10),80, m_force);
    if(attaque.isSuccessfulAttaque()){
        m_force -= attaque.getCoutsDeForce();
        cible->recevoirDegats(attaque.getDegats());
    }
    return attaque;

}
Attaque ChevalierJedi::sortGuerison() {
    Attaque attaque("Sort Gu\x82rison",0,lancerDe(1,8),90, m_force);
    if(attaque.isSuccessfulAttaque()){
		m_force -= attaque.getCoutsDeForce();
		int guerison(lancerDe(1,10));
        m_vie += guerison;

		attaque.setGuerison(guerison);

        if(m_vie > m_vieMax){
            m_vie = m_vieMax;
        }
    }
    return attaque;

}
Attaque ChevalierJedi::attaqueSabreLaser(Personnage* cible) {
    Attaque attaque("Arme Sabre Laser",lancerDe(2,6),0,75, m_force);
    if(attaque.isSuccessfulAttaque()){
        cible->recevoirDegats(attaque.getDegats());
    }
    return attaque;

}
void ChevalierJedi::drawPersonnage(int slot) const{
	switch(slot){
	case 0:
		drawJedi(5,10,10);
		break;
	case 1:
		drawJedi(65,10,10);
		break;
	}
}

std::string ChevalierJedi::getType() const{
	return "chevalier jedi";
}