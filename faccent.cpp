#include <iomanip>
#include <string>
#include <Windows.h>
#include "faccent.h"

using namespace std;

string accent(char tab[]) {	
    char buffer[256];
    CharToOemA(tab, buffer);
    string str(buffer);
    return str;
}
