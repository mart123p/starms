#include <iostream>
#include "ChevalierJedi.h"
#include "Personnage.h"
#include "Commando.h"
#include "Attaque.h"
#include "SithAssassin.h"
#include "SorcierSith.h"

using namespace std;

int main() {
    std::srand((unsigned int) std::time(0));

    ChevalierJedi bob;
    ChevalierJedi rip;
    bob.doAttack(bob.getAttaques()[0], rip);


    return 0;
}