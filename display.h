#ifndef LAB_PERSONNAGE_DISPLAY_H
#define LAB_PERSONNAGE_DISPLAY_H
#include <string>
#include "Personnage.h"
#include <sstream>

//Toutes les fonctions liées à l'affichage se retrouvent ici.


#define consoleWidth 78;
#define consoleHeight 24;

/*
Entrée: null
Sortie: void 
Rôle: Fonction qui joue une petite musique sympatique
*/
void playTheme();

/*
Entrée: null
Sortie: void 
Rôle: Arrete la petite musique sympatique
*/
void stopTheme();

/*
Entrée: Cette fonction reçoit le code de couleur généré par la fonction showAvailableColors
Sortie: void 
Rôle: Change la couleur de la console pour le prochain stream passé par cout
*/
void setcolor(unsigned short color);

/*
Entrée: null
Sortie: void 
Rôle: Dessine un patron dans la console de toutes les couleurs possibles.
*/
void showAvailableColors();

/*
Entrée: position en x relative au coin en haut gauche, position en y
Sortie: void 
Rôle: Dessine le titre du jeu en gros sur dans la console aux cordonnées fournies.
*/
void drawTitleBig(int x, int y);

/*
Entrée: position en x relative au coin en haut gauche, position en y, le numéro d'identification de la couleur
Sortie: void 
Rôle: Dessine un SorcierSith avec la couleur et aux cordonnées fournies.
*/
void drawSorcierSith(int x, int y, unsigned short color);

/*
Entrée: position en x relative au coin en haut gauche, position en y, le numéro d'identification de la couleur
Sortie: void 
Rôle: Dessine un Commando avec la couleur et aux cordonnées fournies.
*/
void drawCommando(int x, int y, unsigned short color);

/*
Entrée: position en x relative au coin en haut gauche, position en y, le numéro d'identification de la couleur
Sortie: void 
Rôle: Dessine un Jedi avec la couleur et aux cordonnées fournies.
*/
void drawJedi(int x, int y, unsigned short color);

/*
Entrée: position en x relative au coin en haut gauche, position en y, le numéro d'identification de la couleur
Sortie: void 
Rôle: Dessine un Assassin avec la couleur et aux cordonnées fournies.
*/
void drawAssassin(int x, int y, unsigned short color);

/*
Entrée: position en x relative au coin en haut gauche, position en y, largeur du rectangle, longueur du rectangle, numéro d'identification de la couleur,charactère avec lequel dessiner le rectangle, bool si le triangle doit être rempli par la couleur
Sortie: void 
Rôle: Dessine un rectangle dans la console avec les paramètres fournis.
*/
void drawRectangle(int x, int y, int width, int height, unsigned short color, char border, bool isFull);

/*
Entrée: position en x relative au coin en haut gauche, position en y, largeur du rectangle, longueur du rectangle, numéro d'identification de la couleur,charactère avec lequel dessiner le rectangle, bool si le triangle doit être rempli par la couleur,numéro d'identification de la couleur suplémentaire pour remplir la boite. 
Sortie: void 
Rôle: Dessine un rectangle dans la console avec les paramètres fournis.
*/
void drawRectangle(int x, int y, int width, int height, unsigned short color, char border, bool isFull, unsigned short colorFull);

/*
Entrée: null
Sortie: void 
Rôle: Dessine l'écran d'accueil
*/
void present();

/*
Entrée: position en x relative au coin en haut gauche, position en y 
Sortie: void 
Rôle: Déplace le cursor dans la console aux positions voulues.
*/
void moveCursorTo(int x, int y);
#endif