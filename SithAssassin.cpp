#include "SithAssassin.h"

SithAssassin::SithAssassin() {
    m_vieMax = lancerDe(3, 20);
    m_vie = m_vieMax;
    m_forceMax = lancerDe(1,20);
    m_force = m_forceMax;
    m_nom = "Archibald";
}
SithAssassin::SithAssassin(std::string nom): Personnage(nom) {
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
std::vector <std::string> SithAssassin::getAttaques() const {

}