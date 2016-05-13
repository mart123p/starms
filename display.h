#ifndef LAB_PERSONNAGE_DISPLAY_H
#define LAB_PERSONNAGE_DISPLAY_H
#include <string>
#include "Personnage.h"
#include <sstream>

//Toutes les fonctions li�es � l'affichage se retrouvent ici.


#define consoleWidth 78;
#define consoleHeight 24;

/*
Entr�e: null
Sortie: void 
R�le: Fonction qui joue une petite musique sympatique
*/
void playTheme();

/*
Entr�e: null
Sortie: void 
R�le: Arrete la petite musique sympatique
*/
void stopTheme();

/*
Entr�e: Cette fonction re�oit le code de couleur g�n�r� par la fonction showAvailableColors
Sortie: void 
R�le: Change la couleur de la console pour le prochain stream pass� par cout
*/
void setcolor(unsigned short color);

/*
Entr�e: null
Sortie: void 
R�le: Dessine un patron dans la console de toutes les couleurs possibles.
*/
void showAvailableColors();

/*
Entr�e: position en x relative au coin en haut gauche, position en y
Sortie: void 
R�le: Dessine le titre du jeu en gros sur dans la console aux cordonn�es fournies.
*/
void drawTitleBig(int x, int y);

/*
Entr�e: position en x relative au coin en haut gauche, position en y, le num�ro d'identification de la couleur
Sortie: void 
R�le: Dessine un SorcierSith avec la couleur et aux cordonn�es fournies.
*/
void drawSorcierSith(int x, int y, unsigned short color);

/*
Entr�e: position en x relative au coin en haut gauche, position en y, le num�ro d'identification de la couleur
Sortie: void 
R�le: Dessine un Commando avec la couleur et aux cordonn�es fournies.
*/
void drawCommando(int x, int y, unsigned short color);

/*
Entr�e: position en x relative au coin en haut gauche, position en y, le num�ro d'identification de la couleur
Sortie: void 
R�le: Dessine un Jedi avec la couleur et aux cordonn�es fournies.
*/
void drawJedi(int x, int y, unsigned short color);

/*
Entr�e: position en x relative au coin en haut gauche, position en y, le num�ro d'identification de la couleur
Sortie: void 
R�le: Dessine un Assassin avec la couleur et aux cordonn�es fournies.
*/
void drawAssassin(int x, int y, unsigned short color);

/*
Entr�e: position en x relative au coin en haut gauche, position en y, largeur du rectangle, longueur du rectangle, num�ro d'identification de la couleur,charact�re avec lequel dessiner le rectangle, bool si le triangle doit �tre rempli par la couleur
Sortie: void 
R�le: Dessine un rectangle dans la console avec les param�tres fournis.
*/
void drawRectangle(int x, int y, int width, int height, unsigned short color, char border, bool isFull);

/*
Entr�e: position en x relative au coin en haut gauche, position en y, largeur du rectangle, longueur du rectangle, num�ro d'identification de la couleur,charact�re avec lequel dessiner le rectangle, bool si le triangle doit �tre rempli par la couleur,num�ro d'identification de la couleur supl�mentaire pour remplir la boite. 
Sortie: void 
R�le: Dessine un rectangle dans la console avec les param�tres fournis.
*/
void drawRectangle(int x, int y, int width, int height, unsigned short color, char border, bool isFull, unsigned short colorFull);

/*
Entr�e: null
Sortie: void 
R�le: Dessine l'�cran d'accueil
*/
void present();

/*
Entr�e: position en x relative au coin en haut gauche, position en y 
Sortie: void 
R�le: D�place le cursor dans la console aux positions voulues.
*/
void moveCursorTo(int x, int y);
#endif