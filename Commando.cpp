#include "Commando.h"

Commando::Commando() {
    m_vieMax = lancerDe(7, 20);
    m_vie = m_vieMax;
    m_nom = "Robert";
}
Commando::Commando(std::string nom) {
    m_nom = nom;
    m_vieMax = lancerDe(7, 20);
    m_vie = m_vieMax;
}
Commando::~Commando() {

}
Attaque Commando::attaqueCoupDePiedRenverse(Personnage &cible) const {

}
Attaque Commando::attaqueCanonLaser(Personnage &cible) const {

}
std::vector <std::string> Commando::getAttaques() const {

}