//
// Created by Martin Pouliot on 2016-05-03.
//

#ifndef STARMS_PERSONNAGE_H
#define STARMS_PERSONNAGE_H


#include <string>
#include <iostream>
#include <vector>
class Personnage {
public:
    /* Constructeur avec nom */
    Personnage(std::string nom);
    /* Constructeur sans nom */
    Personnage();
    /* Destructeur */
    ~Personnage();
    /*
     * Entrée: Aucune
     * Sortie: Sort un vecteur de tous les attaques
     * Rôle: Sera utile pour le choix des attaques
     */
    virtual std::vector <std::string> getAttaques();
    /*
     * Entrée: Le nombre de dés à lancer ainsi que le nombre de faces par dé
     * Sortie: Retourne la valeur des dés additionés.
     * Rôle: Cette fonction est uttilisé pour tous les attaques et les caractérisqtiques de tous les personnages
     */
    static int lancerDe(int nbDe, int nbFace);
    /*
     * Entrée: Le nombre de dégats à reçevoir de l'opposant
     * Sortie: Aucune
     * Rôle: Permet à chaque personnage de reçevoir des dégats
    */
    void recevoirDegats(int degats);
    /*
     * Entrée: Le personnage à attaquer ainsi que le nombre de dégats à lui envoyer
     * Sortie: Aucune
     * Rôle: Permet d'attaquer un personnage ciblé (son adversaire)
    */
    virtual void attaquer(Personnage &cible, int degats);
    /*
     * Entrée: Aucune
     * Sortie: Le nombre de vie du personnage
     * Rôle: Retourne le nombre de vie restante
    */
    int getVie();
    /*
     * Entrée: Aucune
     * Sortie: Le nombre de vie de départ du personnage
     * Rôle: Retourne le nombre de vie que le personnage avait au départ
    */
    int getVieMax();
    /*
     * Entrée: Aucune
     * Sortie: Le nombre de force du personnage
     * Rôle: Retourne le nombre de force du personnage
    */
    int getForce();
    /*
     * Entrée: Aucune
     * Sortie: Le nombre de force de départ du personnage
     * Rôle: Retourne le nombre de force que le personnage avait au départ
    */
    int getForceMax();
    /*
     * Entrée: Aucune
     * Sortie: Le nom du personnage
     * Rôle: Retourne le nom du personnage présent
    */
    std::string getNom();

protected:
    int m_vieMax;
    int m_forceMax;
    int m_vie;
    int m_force;
    std::string m_nom;
};


#endif //STARMS_PERSONNAGE_H
