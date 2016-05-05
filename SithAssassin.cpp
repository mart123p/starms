#include "SithAssassin.h"

SithAssassin::SithAssassin() : SorcierSith() {
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(1,20);
    m_force = m_forceMax;
    m_nom = "Archibald";
}
SithAssassin::SithAssassin(std::string nom): SorcierSith(nom) {
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(1,20);
    m_force = m_forceMax;
}
SithAssassin::~SithAssassin() {

}
Attaque SithAssassin::attaqueAveuglement(Personnage &cible) {

}
Attaque SithAssassin::attaqueSabreLaserDouble(Personnage &cible) {

}