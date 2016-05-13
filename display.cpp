#include "display.h"
#include <Windows.h>
#include <MMSystem.h>
#include <iostream>
#include "faccent.h"

void setcolor(unsigned short color){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}

void showAvailableColors(){
	using namespace std;
	system("cls");
	for(int i(0); i <= 256; i++){
		setcolor(i);
		cout << "  " << i << "  ";
	}
}


void drawSorcierSith(int x, int y, unsigned short color){
	using namespace std;
	setcolor(color);
	moveCursorTo(x,y);
	cout << "     __/\\__   ";
	moveCursorTo(x,y+1);
	cout << ". _  \\\\''//   ";
	moveCursorTo(x,y+2);
	cout << "-( )-/_||_\\   ";
	moveCursorTo(x,y+3);
	cout << " .'. \\_()_/   ";
	moveCursorTo(x,y+4);
	cout << "  |   | . \\   ";
	moveCursorTo(x,y+5);
	cout << "  |   | .  \\  ";
	moveCursorTo(x,y+6);
	cout << " .'. ,\\_____'.";
}

void drawCommando(int x, int y, unsigned short color){
	using namespace std;
	setcolor(color);
	moveCursorTo(x,y);
	cout << "   .-.";
	moveCursorTo(x,y+1);
	cout << " __|=|__";
	moveCursorTo(x,y+2);
	cout << "(_/`-`\_)";
	moveCursorTo(x,y+3);
	cout << "//\\___/\\\\";
	moveCursorTo(x,y+4);
	cout << "<>/   \\<>";
	moveCursorTo(x,y+5);
	cout << "   |||";
	moveCursorTo(x, y+6);
	cout << "  /_|_\\";
}

void drawJedi(int x, int y, unsigned short color){
	using namespace std;
	setcolor(color);
	moveCursorTo(x,y);
	cout << "     k";
	moveCursorTo(x,y+1);
	cout << "  O  |";
	moveCursorTo(x,y+2);
	cout << "()Y==o";
	moveCursorTo(x,y+3);
	cout << " /_\\ |";
	moveCursorTo(x,y+4);
	cout << " _W_ |";
}

void drawAssassin(int x, int y, unsigned short color){
	using namespace std;
	setcolor(color);
	moveCursorTo(x,y);
	cout << " __ *";
	moveCursorTo(x,y+1);
	cout << "(``)*";
	moveCursorTo(x,y+2);
	cout << "(Y==o";
	moveCursorTo(x,y+3);
	cout << "/_\\ *";
	moveCursorTo(x,y+4);
	cout << "_W_ *";
}

void drawTitleBig(int x, int y){
	using namespace std;
	setcolor(14);
	moveCursorTo(x,y);
	cout << "               _________________      ____         __________";
	setcolor(15);
	moveCursorTo(x,y+1);
	cout << " .       .";setcolor(14);cout <<"    /                 |    /    \\    "; setcolor(15); cout <<"."; setcolor(14); cout <<"  |          \\"; setcolor(15);
	moveCursorTo(x,y+2);
	cout << "     .";setcolor(14);cout <<"       /    ______   _____| ";  setcolor(15);cout <<"."; setcolor(14); cout <<" /      \\      |    ___    |    "; setcolor(15); cout << ".     .";
	moveCursorTo(x,y+3);
	setcolor(14);
	cout << "             \\    \\    |   |       /   /\\   \\     |   |___>   |";
	moveCursorTo(x,y+4);
	setcolor(15);
	cout << "           ."; setcolor(14); cout << "  \\    \\   |   |      /   /__\\   \\  "; setcolor(15); cout <<"."; setcolor(14); cout <<" |         _/          "; setcolor(15); cout <<" .";
	moveCursorTo(x,y+5);
	setcolor(15);
	cout << " ."; setcolor(14); cout <<"     ________>    |  |   |"; setcolor(15);cout <<" .";  setcolor(14); cout <<"   /            \\   |   |\\    \\_______   "; setcolor(15); cout <<" .";
	moveCursorTo(x,y+6);
	setcolor(14);
	cout << "      |            /   |   |    /    ______    \\  |   | \\           |";
	moveCursorTo(x,y+7);
	cout << "      |___________/    |___|   /____/      \\____\\ |___|  \\__________|    "; setcolor(15);cout << ".";
	moveCursorTo(x,y+8);
	cout << "  .  "; setcolor(14); cout <<"   ____    __  "; setcolor(15); cout<<"."; setcolor(14); cout <<" _____   ____     "; setcolor(15); cout <<" ."; setcolor(14); cout <<"  __________   "; setcolor(15); cout <<".";  setcolor(14);cout <<"  _________";
	moveCursorTo(x,y+9);
	cout << "       \\    \\  /  \\  /    /  /    \\       |          \\    /         |      "; setcolor(15); cout <<"."; setcolor(14);
	moveCursorTo(x,y+10);
	cout << "        \\    \\/    \\/    /  /      \\      |    ___    |  /    ______| "; setcolor(15); cout << " ."; setcolor(14);
	moveCursorTo(x,y+11);
	cout << "         \\              /  /   /\\   \\ ";setcolor(15); cout <<"."; setcolor(14);cout <<"   |   |___>   |  \\    \\";
	moveCursorTo(x,y+12);
	setcolor(15);
	cout << "   . ";setcolor(14); cout <<"     \\            /  /   /__\\   \\    |         _/";  setcolor(15); cout << "."; setcolor(14);cout <<"   \\    \\            "; setcolor(15); cout << "+";
	moveCursorTo(x, y+13);
	setcolor(14);
	cout << "           \\    /\\    /  /            \\   |   |\\    \\______>    |   ";setcolor(15); cout <<"."; setcolor(14);
	moveCursorTo(x, y+14);
	cout << "            \\  /  \\  /  /    ______    \\  |   | \\              /         "; setcolor(15); cout <<" .";
	moveCursorTo(x, y+15);
	cout << " .       .  "; setcolor(14); cout <<" \\/    \\/  /____/      \\____\\ |___|  \\____________/ "; setcolor(15);
	moveCursorTo(x, y+16);
	cout << "                               .                                        .";
	moveCursorTo(x, y+17); setcolor(14);
	cout << "                               STARMS RPG VERSION";
	setcolor(7);

}


void present(){
	using namespace std;
	drawTitleBig(0,0);
	moveCursorTo(0,19);
	cout << "Par: Yan-\x82ric Cossette &";
	moveCursorTo(5,20);
	cout << "Martin Pouliot";
	moveCursorTo(56,19);
	cout << "Projet de fin de session";
	moveCursorTo(76,20);
	cout << "2016";
	moveCursorTo(0,23);
	cout << "Le but du jeu est d'attaquer l'adversaire jusqu'a ce que mort s'en suive si vous avez le courage ";
	system("pause");
}

void drawRectangle(int x, int y, int width, int height, unsigned short color, char border, bool isFull){
	using namespace std;
	setcolor(color);
	moveCursorTo(x,y);
	//Le haut du rectangle
	for(int i(0); i < width; i++){
		moveCursorTo(x+i,y);
		cout << border;
	}

	//Le bas du rectangle
	for(int i(0); i< width; i++){
		moveCursorTo(x+i,y+height-1);
		cout << border;
	}
	//Le cote gauche du rectangle
	for(int i(0); i < height; i++){
		moveCursorTo(x,y+i);
		cout << border;
	}
	//Le cote droit du rectangle
	for(int i(0); i < height; i++){
		moveCursorTo(x+width-1,y+i);
		cout << border;
	}
	//Le triangle sera rempli avec la couleur en question
	if(isFull){
		for(int i(1); i < (height-1); i++){
			for(int j(1); j < (width-1); j++){
				moveCursorTo(x+j,y+i);
				cout << " ";
			}
		}

	}
	moveCursorTo(0,0);

}

void drawRectangle(int x, int y, int width, int height, unsigned short color, char border, bool isFull, unsigned short colorFull){
	using namespace std;
	setcolor(color);
	moveCursorTo(x,y);
	//Le haut du rectangle
	for(int i(0); i < width; i++){
		moveCursorTo(x+i,y);
		cout << border;
	}

	//Le bas du rectangle
	for(int i(0); i< width; i++){
		moveCursorTo(x+i,y+height-1);
		cout << border;
	}
	//Le cote gauche du rectangle
	for(int i(0); i < height; i++){
		moveCursorTo(x,y+i);
		cout << border;
	}
	//Le cote droit du rectangle
	for(int i(0); i < height; i++){
		moveCursorTo(x+width-1,y+i);
		cout << border;
	}
	//Le triangle sera rempli avec la couleur en question
	if(isFull){
		setcolor(colorFull);
		for(int i(1); i < (height-1); i++){
			for(int j(1); j < (width-1); j++){
				moveCursorTo(x+j,y+i);
				cout << " ";
			}
		}

	}
	moveCursorTo(0,0);

}

void stopTheme(){
	PlaySound(NULL, 0, 0);
}

void playTheme(){
	PlaySound(TEXT("theme.wav"),NULL,  SND_LOOP | SND_ASYNC);
}

void moveCursorTo(int x, int y){
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); 
	COORD CursorPosition;
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
}