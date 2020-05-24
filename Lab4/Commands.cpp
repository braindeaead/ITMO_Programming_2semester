#include <iostream>
#include <algorithm>
#include "Commands.h"
#include "Hexagon.h"
#include "Section.h"
#include "CVector2D.h"
#include "United.h"
#include <cmath>

using namespace std;

void Commands::showAll() {
    cout<<"Here are your figures\n";
    for (United *c : figures){
        c->draw();
        cout<<endl;
    }
}

void Commands::addFigure() {
    int command;

    while (true) {
        cout << "What type of figure do you want to add?\n[1] Section\n[2] Hexagon\n";
        cin >> command;
        if (command == 1) {
            figures.push_back(new Section);
            figures.back()->initFromDialog();
            return;
        }
        if (command == 2) {
            figures.push_back(new Hexagon);
            figures.back()->initFromDialog();
            return;
        }
        if (command > 2) {
            cout << "wrong input, try again";
        }
    }
}

void Commands::showSummPerimeter() {
    double perimeter = 0.0;
    for (United *c : figures)
        perimeter += c->perimeter();
    cout<<"Here is summ of perimeters of all figures: "<<perimeter<<endl;
}

void Commands::showSummSquare() {
    double square = 0.0;
    for (United *c : figures)
        square += c->square();
    cout<<"Here is summ of squares of all figures: "<<square<<endl;
}

void Commands::showSummSize() {
    int size = 0;
    for (United *c : figures)
        size += c->size();
    cout<<"Here is summ of sizes of all figures: "<<size<<endl;

}

void Commands::sortByMass() {
    int j = 0;
    United *tmp;
    for(int i=0; i<figures.size(); i++) {
        j = i;
        for (int k = i; k < figures.size(); k++) {
            if (figures[j]->mass() > figures[k]->mass())
                j = k;
        }
        tmp = figures[i];
        figures[i] = figures[j];
        figures[j] = tmp;
    };
    cout<<"Figures are sorted"<<endl<<endl;
}

void Commands::showCentreMass() {
    double summMassMultPositionX = 0;
    double summMassMultPositionY = 0;
    double summMass = 0;

    for (United *t : figures)
    {
        summMass += t->mass();
        summMassMultPositionX += t->mass() * t->position().x;
        summMassMultPositionY += t->mass() * t->position().y;
    }

    centreMass->x = summMassMultPositionX/summMass;
    centreMass->y = summMassMultPositionY/summMass;

    cout<<"Here are coordinates of Mass Centre of your system\n";

    cout<<"x:"<<centreMass->x<<endl;
    cout<<"y:"<<centreMass->y<<endl;


}
