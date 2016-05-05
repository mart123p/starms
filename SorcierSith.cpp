#include "SorcierSith.h"
SorcierSith::SorcierSith() {
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
Attaque SorcierSith::attaqueDechargeElectrique(Personnage &cible) const {

}
Attaque SorcierSith::attaqueCouteauLaser(Personnage &cible) const {

}
std::vector <std::string> SorcierSith::getAttaques() const{

}