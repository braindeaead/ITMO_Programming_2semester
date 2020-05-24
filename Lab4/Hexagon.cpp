#pragma once
#include "Hexagon.h"
#include <iostream>
#include <cmath>

using namespace std;

Hexagon::Hexagon() {
    r = CVector2D(0.0, 0.0);
    R = CVector2D(0.0, 0.0);
    center = CVector2D(0.0, 0.0);
    pos = CVector2D(0.0, 0.0);
    mas = 0;

}

Hexagon::Hexagon(CVector2D &r, CVector2D &R, CVector2D &center, CVector2D &pos, double mas) {
    this->r = r;
    this->R = R;
    this->center = center;
    this->pos = pos;
    this->mas = mas;

}

Hexagon::~Hexagon() = default;

double Hexagon::square() {
    return (3 * sqrt(3) * sqrt(R.x * R.x + R.y * R.y) + sqrt(R.x * R.x + R.y * R.y) / 2);
}

double Hexagon::perimeter() {
    return (6 * sqrt(R.x * R.x + R.y * R.y));
}

double Hexagon::mass() {
    return mas;
}

CVector2D Hexagon::position() {
    return center;
}

bool Hexagon::operator==(IPhysObject &ob) {
    return mass() == ob.mass();
}

bool Hexagon::operator<(IPhysObject &ob) {
    return mass() < ob.mass();
}

void Hexagon::draw() {
    cout << "Center coordinates: {" << center.x << ", " << center.y << "}" << endl
         << "R length: " << sqrt(R.x * R.x + R.y * R.y) << endl
         << "r length: " << sqrt(r.x * r.x + r.y * r.y) << endl
         << "Mass: " << mas << endl
         << "Position coordinates: {" << pos.x << ", " << pos.y << "}" << endl
         << "Square: " << square() << endl
         << "Perimeter: " << perimeter() << endl;
}

void Hexagon::initFromDialog() {
    cout << "Enter center x and y coordinates, end of R coordinates (x and y), " << endl
         << "end of r coordinates (x and y), mass ans position coordinates (x and y): " << endl;
    cin >> center.x >> center.y >> R.x >> R.y >> r.x >> r.y >> mas >> pos.x >> pos.y;
}

const char *Hexagon::classname(){
    return "Hexagon";
}

unsigned int Hexagon::size() {
    return sizeof(*this);
}