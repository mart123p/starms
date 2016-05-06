#include "SorcierSith.h"
SorcierSith::SorcierSith() : Personnage() {
    m_vieMax = lancerDe(4, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(4,20);
    m_force = m_forceMax;
    m_nom = "Jocelyn";

    m_attaques.push_back("Attaque Décharge électrique");
    m_attaques.push_back("Arme couteau laser");
}
SorcierSith::SorcierSith(std::string nom): Personnage(nom) {
    m_vieMax = lancerDe(4, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(4,20);
    m_force = m_forceMax;

    m_attaques.push_back("Attaque Décharge électrique");
    m_attaques.push_back("Arme couteau laser");
}
SorcierSith::~SorcierSith() {

}
Attaque SorcierSith::attaqueDechargeElectrique(Personnage &cible) {
    Attaque attaque("Décharge électrique", lancerDe(2, 20), lancerDe(1, 20), 75);
    if(attaque.isSuccessfulAttaque()){
        cible.recevoirDegats(attaque.getDegats());
    }
    return attaque;
}
Attaque SorcierSith::attaqueCouteauLaser(Personnage &cible) {
    Attaque attaque("Couteau laser", lancerDe(2, 4), 0, 70);
    if(attaque.isSuccessfulAttaque()){
        cible.recevoirDegats(attaque.getDegats());
    }
    return attaque;
}

Attaque SorcierSith::doAttack(std::string attaque, Personnage &cible){
    if(attaque  == "Attaque Décharge électrique"){
        return attaqueDechargeElectrique(cible);
    }else if(attaque == "Arme couteau laser"){
        return attaqueDechargeElectrique(cible);
    }else{
        return Attaque();
    }
}