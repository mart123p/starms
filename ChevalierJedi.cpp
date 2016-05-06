#include "ChevalierJedi.h"

ChevalierJedi::ChevalierJedi() : Personnage() {
    m_vieMax = lancerDe(5, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(2,20);
    m_force = m_forceMax;
    m_nom = "Jean-Pierre";

    m_attaques.push_back("Sort projection");
    m_attaques.push_back("Sort guérison");
    m_attaques.push_back("Arme sabre laser");

}
ChevalierJedi::ChevalierJedi(std::string nom) : Personnage(nom) {
    m_vieMax = lancerDe(5, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(2,20);
    m_force = m_forceMax;

    m_attaques.push_back("Sort projection");
    m_attaques.push_back("Sort guérison");
    m_attaques.push_back("Arme sabre laser");

}
ChevalierJedi::~ChevalierJedi() {

}

Attaque ChevalierJedi::doAttack(std::string attaque, Personnage &cible) {
    if(attaque == "Sort projection"){
        return sortProjection(cible);
    }else if(attaque =="Sort guérison"){
        return sortGuerison();
    }else if(attaque == "Arme sabre laser"){
        return attaqueSabreLaser(cible);
    }else{
        return Attaque();
    }
}

Attaque ChevalierJedi::sortProjection(Personnage &cible) {
    Attaque attaque("Sort Projection",lancerDe(2,8),lancerDe(1,10),80);
    if(attaque.isSuccessfulAttaque()){
        m_force -= attaque.getCoutsDeForce();
        cible.recevoirDegats(attaque.getDegats());
    }
    return attaque;

}
Attaque ChevalierJedi::sortGuerison() {
    Attaque attaque("Sort Guérison",0,lancerDe(1,8),90);
    if(attaque.isSuccessfulAttaque()){
        m_vie =+ lancerDe(1,10);
        if(m_vie > m_vieMax){
            m_vie = m_vieMax;
        }
    }
    return attaque;

}
Attaque ChevalierJedi::attaqueSabreLaser(Personnage &cible) {
    Attaque attaque("Arme Sabre Laser",lancerDe(2,6),0,75);
    if(attaque.isSuccessfulAttaque()){
        cible.recevoirDegats(attaque.getDegats());
    }
    return attaque;

}
