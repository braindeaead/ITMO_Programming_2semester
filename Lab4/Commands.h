#pragma once
#include <vector>
#include "Section.h"
#include "Hexagon.h"
#include "CVector2D.h"
#include "United.h"

using namespace std;

class Commands {
public:
    CVector2D *centreMass = new CVector2D (0.0,0.0);

    vector <United*> figures;
    void addFigure();
    void showAll();
    void showSummSquare();
    void showSummPerimeter();
    void showSummSize();
    void sortByMass();
    void showCentreMass();

};
