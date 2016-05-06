#include "Commando.h"

Commando::Commando() : Personnage() {
    m_vieMax = lancerDe(7, 20);
    m_vie = m_vieMax;
    m_nom = "Robert";

    m_attaques.push_back("Attaque Coup de pied renvers\x82");
    m_attaques.push_back("Arme Canon laser");

}
Commando::Commando(std::string nom): Personnage(nom) {
    m_nom = nom;
    m_vieMax = lancerDe(7, 20);
    m_vie = m_vieMax;

    m_attaques.push_back("Attaque Coup de pied renvers\x82");
    m_attaques.push_back("Arme Canon laser");
}
Commando::~Commando() {

}
Attaque Commando::attaqueCoupDePiedRenverse(Personnage &cible) {
    Attaque attaque("Coup de pied renvers\x82", lancerDe(2, 6), 0, 90);
    if(attaque.isSuccessfulAttaque()){
        cible.recevoirDegats(attaque.getDegats());
    }
    return attaque;
}
Attaque Commando::attaqueCanonLaser(Personnage &cible) {
    Attaque attaque("Canon laser", lancerDe(4, 4), 0, 90);
    if(attaque.isSuccessfulAttaque()){
        cible.recevoirDegats(attaque.getDegats());
    }
    return attaque;
}
Attaque Commando::doAttack(std::string attaque, Personnage &cible) {
    if(attaque == "Attaque Coup de pied renvers\x82"){
        return attaqueCoupDePiedRenverse(cible);
    }else if(attaque =="Arme Canon laser"){
        return attaqueCanonLaser(cible);
    }else{
        return Attaque();
    }
}