#ifndef STARMS_ATTAQUE_H
#define STARMS_ATTAQUE_H


#include <string>

class Attaque {
public:
    /* Constructeur */
    Attaque();
    /* Constructeur avec le nom de l'attaque, le nombre dégats, le couts en force, pourcentage de réussite pour l'attaque*/
    Attaque(std::string nom, int degats, int coutsDeForce, int pourcentageReussite);
    /* Destructeur */
    ~Attaque();
    /*
     * Entrée: Aucune
     * Sortie: Dit si l'attaque à réussi ou non (avec le pourcentage de réussite)
     * Rôle: Dit si l'attaque à réussi ou non
    */
    bool successfullAttaque();

    /*
     * Entrée: Aucune
     * Sortie: Retourne le nombre de dégats
     * Rôle: retourne le nombre de dégats suite au test de réussite de l'attaque
    */
    int getDegats();

    /*
     * Entrée: Aucune
     * Sortie: Retourne le cout de l'attaque en force
     * Rôle: Permet de calculer le cout de l'attaque pour que plus-tard savoir si le personnage pourra faire son attaque ou non
    */
    int getCoutsDeForce();

    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    std::string getNom();

private:
    int m_degats;
    int m_coutsDeForce;
    int m_pourcentageReussite;
    std::string m_nom;
};


#endif //STARMS_ATTAQUE_H
