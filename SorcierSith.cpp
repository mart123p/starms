#include "SorcierSith.h"
SorcierSith::SorcierSith() : Personnage() {
    m_vieMax = lancerDe(4, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(4,20);
    m_force = m_forceMax;
    m_nom = "Jocelyn";

    m_attaques.push_back("Attaque D\202charge \x82lectrique");
    m_attaques.push_back("Arme couteau laser");
}
SorcierSith::SorcierSith(std::string nom): Personnage(nom) {
    m_vieMax = lancerDe(4, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(4,20);
    m_force = m_forceMax;

    m_attaques.push_back("Attaque D\202charge \x82lectrique");
    m_attaques.push_back("Arme couteau laser");
}
SorcierSith::~SorcierSith() {

}
Attaque SorcierSith::attaqueDechargeElectrique(Personnage* cible) {
    Attaque attaque("D\202charge \x82lectrique", lancerDe(2, 20), lancerDe(1, 20), 75, m_force);
    if(attaque.isSuccessfulAttaque()){
		m_force -= attaque.getCoutsDeForce();
        cible->recevoirDegats(attaque.getDegats());
    }
    return attaque;
}
Attaque SorcierSith::attaqueCouteauLaser(Personnage* cible) {
    Attaque attaque("Couteau laser", lancerDe(2, 4), 0, 70, m_force);
    if(attaque.isSuccessfulAttaque()){
        cible->recevoirDegats(attaque.getDegats());
    }
    return attaque;
}

Attaque SorcierSith::doAttack(std::string attaque, Personnage* cible){
    if(attaque  == ("Attaque D\202charge \x82lectrique")){
        return attaqueDechargeElectrique(cible);
    }else if(attaque == "Arme couteau laser"){
        return attaqueCouteauLaser(cible);
    }else{
        return Attaque();
    }
}
std::string SorcierSith::getType() const{
	return "sorcier sith";
}

void SorcierSith::drawPersonnage(int slot) const{
	switch(slot){
	case 0:
		drawSorcierSith(5,8,13);
		break;
	case 1:
		drawSorcierSith(65,8,13);
		break;
	}
}