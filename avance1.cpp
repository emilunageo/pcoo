#include <iostream>
using namespace std;

#include "Auto.h"
#include "Comida.h"
#include "Deportes.h"

int main() {
    Auto ford;
    ford.getModel();
    ford.getYear();
    ford.setModel("Ford Mustang");
    ford.setYear(2022);

    Comida tacos;
    tacos.getName();
    tacos.setModel("Tacos de suadero");

    Deportes soccer;
    soccer.getName();
    soccer.getYear();
    soccer.getPractice();

    soccer.setName("Futból");
    soccer.setPractice("I don't practice.");


    cout <<"Modelo auto fav: " << ford.getModel() << endl;
    cout <<"Comida fav: " << tacos.getName() << endl;
    cout <<"Deporte fav: " << soccer.getName() << endl;
    return 0;
}