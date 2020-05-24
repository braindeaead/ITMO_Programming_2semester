#pragma once
#include "Section.h"
#include <iostream>

using namespace std;

Section::Section() {
    a = 0;
    b = 0;
    Mass = 0;
    pos = CVector2D(0.0, 0.0);
}

Section::Section (const double a, const double b, const double mass, CVector2D &pos ) {
    this->a = a;
    this->b = b;
    this->Mass = mass;
    this->pos = pos;
}

Section::Section (const Section &section ) {
    this->a = section.a;
    this->b = section.b;
    this->Mass = section.Mass;
    this->pos = section.pos;
}

Section::~Section() = default;

void Section::draw() {
    cout << "Start coordinate: " << a << endl << "End coordinate: " << b << endl << "Mass: " << Mass
              << endl << "Position coordinates: {" << pos.x << ", " << pos.y << "}" << endl;
}

void Section::initFromDialog() {
    cout << "Enter the start and the end points of Section, mass and position coordinates: " << endl;
    cin >> a >> b >> Mass >> pos.x >> pos.y;
}

unsigned int Section::size() {
    return sizeof(*this);
}

double Section::square() {
    return 0;
}

double Section::perimeter() {
    return 0;
}

CVector2D Section::position() {
    return pos;
}

bool Section::operator==(IPhysObject &ob)  {
    return mass() == ob.mass();
}

bool Section::operator<(IPhysObject &ob)   {
    return mass() < ob.mass();
}

double Section::mass() {
    return Mass;
}

const char *Section::classname(){
    return "Section";
}



