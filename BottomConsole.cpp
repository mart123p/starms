#include "BottomConsole.h"
#include <iostream>
#include <Windows.h>
#include <conio.h>


#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ENTER 13

BottomConsole::BottomConsole(int color, char border): m_color(color), m_border(border), m_cursor_y(0), m_cursor_x(0){
	drawRectangle(0,17,80,8,color,border,true);
}

void BottomConsole::clear(){
	int consolewidth = consoleWidth;
	int consoleheight = consoleHeight;
	drawRectangle(0,17,80,8,m_color,m_border,true);
	m_cursor_y = 0;
	m_cursor_x = 0;
	moveConsoleCursor();
}

void BottomConsole::setCursorColor(unsigned short color){
	m_color = color;
}

void BottomConsole::print(std::string str){
	setcolor(m_color);
	moveConsoleCursor();
	std::cout << str;
}

void BottomConsole::print(std::vector<std::string> strings){
	for(int i(0); i < strings.size(); i++){
		print(strings[i]);
		nextLine();
	}
}

std::string BottomConsole::input(bool mandatory){
	using namespace std;
	string input;
	if(!mandatory){
		getline(cin, input);
		return input;
	}else{
		
		getline(cin, input);
		int i(1);
		while(input == ""){
			nextLine();
			print("Le champs est requis:");
			getline(cin, input);
			i++;
		}
		return input;
	}
}

void BottomConsole::moveConsoleCursor(){
	moveCursorTo(m_cursor_x + 2, m_cursor_y + 18);
}

void BottomConsole::nextLine(){
	if(m_cursor_y >= 5){
		m_cursor_y = 0;
		clear();
	}
	m_cursor_y++;
	moveConsoleCursor();
	setcolor(m_color);
}

int BottomConsole::menu(std::vector<std::string> strings, std::string title){
	print(title);
	nextLine();
	//On affiche tout dans la zone de texte
	for(int i(0); i < strings.size(); i++){
			if(i == 0)
				print("-> " + strings[i]);
			else
				print("   " + strings[i]);
			nextLine();
		}
	
	bool running(true);
	m_cursor_y = 1;
	while(running) {
		int c(getch());

		if(c == KEY_DOWN && m_cursor_y != strings.size()){
			print("   ");
			m_cursor_y++;
			print("-> ");
			continue;
		}else if(c == KEY_DOWN){
			print("   ");
			m_cursor_y = 1;
			print("-> ");
			continue;
		}else if(c == KEY_UP && m_cursor_y != 1){
			print("   ");
			m_cursor_y--;
			print("-> ");
			continue;
		}else if(c == KEY_UP){
			print("   ");
			m_cursor_y = strings.size();
			print("-> ");
			continue;
		}else if(c == KEY_ENTER){
			running = false;
		}

	}
	
	return (m_cursor_y-1);
}

int BottomConsole::personnageChoix(std::string name){
	std::vector<std::string> strings;
	strings.push_back(name + ", choisisez un personnage:");
	strings.push_back("Chevalier Jedi");
	strings.push_back("Commando");
	strings.push_back("Sorcier Sith");
	strings.push_back("Sith Assassin");

	print(strings[0]);
	nextLine();
	//On affiche tout dans la zone de texte
	for(int i(1); i < strings.size(); i++){
			if(i == 1)
				print("-> " + strings[i]);
			else
				print("   " + strings[i]);
			nextLine();
		}
	
	bool running(true);
	m_cursor_y = 1;

	drawPersonnage(0);
	while(running) {
		int c(getch());
		
		if(c == KEY_DOWN && m_cursor_y != (strings.size()-1)){
			print("   ");
			m_cursor_y++;
			print("-> ");
			drawPersonnage( (m_cursor_y-1));
			continue;
		}else if( c == KEY_DOWN){
			print("   ");
			m_cursor_y = 1;
			print("-> ");
			drawPersonnage( (m_cursor_y-1));
			continue;
		}else if(c == KEY_UP && m_cursor_y != 1){
			print("   ");
			m_cursor_y--;
			print("-> ");
			drawPersonnage( (m_cursor_y-1));
			continue;
		}else if(c == KEY_UP){
			print("   ");
			m_cursor_y = (strings.size()-1);
			print("-> ");
			drawPersonnage( (m_cursor_y-1));
			continue;
		}else if(c == KEY_ENTER){
			running = false;
			drawRectangle(2,8,15,8,0,' ',true,0);
		}

	}
	
	return (m_cursor_y-1);
	
}

void BottomConsole::drawPersonnage(int personnage){
	drawRectangle(2,8,15,8,0,' ',true,0);
	switch(personnage){
		case 0:
			drawJedi(2,10,10);
			break;
		case 1:
			drawCommando(2,8,11);
			break;
		case 2:
			drawSorcierSith(2,8,13);
			break;
		case 3:
			drawAssassin(2,10,12);
			break;
		}


}

bool BottomConsole::yesNo(std::string title){
	std::vector<std::string> yesNo;
	yesNo.push_back("Oui");
	yesNo.push_back("Non");
	return !menu(yesNo, title);
}