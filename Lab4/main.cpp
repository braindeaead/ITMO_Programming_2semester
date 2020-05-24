#include <iostream>
#include "Hexagon.h"
#include "Section.h"
#include "Commands.h"

using namespace std;

int main() {
    Commands commands;

    commands.addFigure();
    commands.addFigure();
    commands.addFigure();

    commands.showSummSize();

    commands.showSummSquare();

    commands.showSummPerimeter();

    commands.showAll();

    commands.sortByMass();

    commands.showAll();

    commands.showCentreMass();

    return 0;
}