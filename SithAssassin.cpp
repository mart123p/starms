#include "SithAssassin.h"

SithAssassin::SithAssassin() : SorcierSith() {
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(1,20);
    m_force = m_forceMax;
    m_nom = "Archibald";

    m_attaques.push_back("Attaque Aveuglement");
    m_attaques.push_back("Arme sabre laser double");
}
SithAssassin::SithAssassin(std::string nom): SorcierSith(nom) {
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(1,20);
    m_force = m_forceMax;

    m_attaques.push_back("Attaque Aveuglement");
    m_attaques.push_back("Arme sabre laser double");
}
SithAssassin::~SithAssassin() {

}

Attaque SithAssassin::doAttack(std::string attaque, Personnage* cible) {
    if(attaque == "Attaque D\202charge \x82lectrique"){
        return attaqueDechargeElectrique(cible);
    }else if(attaque == "Arme couteau laser"){
        return attaqueCouteauLaser(cible);
    }else if(attaque == "Attaque Aveuglement"){
        return attaqueAveuglement(cible);
    }else if(attaque == "Arme sabre laser double"){
        return attaqueSabreLaserDouble(cible);
    }else{
        return Attaque();
    }
}

Attaque SithAssassin::attaqueAveuglement(Personnage* cible) {
    Attaque attaque("Aveuglement", lancerDe(2, 6), 0, 50 , m_force);
    if(attaque.isSuccessfulAttaque()){
        cible->recevoirDegats(attaque.getDegats());
    }
    return attaque;
}
Attaque SithAssassin::attaqueSabreLaserDouble(Personnage* cible) {
    Attaque attaque("Sabre Laser Double", lancerDe(3, 4), 0, 50, m_force);
    if(attaque.isSuccessfulAttaque()){
        cible->recevoirDegats(attaque.getDegats());
    }
    return attaque;
}
std::string SithAssassin::getType() const{
	return "sith assassin";
}
void SithAssassin::drawPersonnage(int slot) const{
	switch(slot){
	case 0:
		drawAssassin(5,10,12);
		break;
	case 1:
		drawAssassin(65,10,12);
		break;
	}
}