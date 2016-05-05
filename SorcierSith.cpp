#include "SorcierSith.h"
SorcierSith::SorcierSith() : Personnage() {
    m_vieMax = lancerDe(4, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(4,20);
    m_force = m_forceMax;
    m_nom = "Jocelyn";
}
SorcierSith::SorcierSith(std::string nom): Personnage(nom) {
    m_vieMax = lancerDe(4, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(4,20);
    m_force = m_forceMax;
}
SorcierSith::~SorcierSith() {

}
Attaque SorcierSith::attaqueDechargeElectrique(Personnage &cible) {
    Attaque attaque("D\x82charge \x82lectrique", lancerDe(2, 20), lancerDe(1, 20), 75);
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