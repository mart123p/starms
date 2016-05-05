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
Attaque SorcierSith::attaqueDechargeElectrique(Personnage &cible) {

}
Attaque SorcierSith::attaqueCouteauLaser(Personnage &cible) {

}
std::vector <std::string> SorcierSith::getAttaques() {

}