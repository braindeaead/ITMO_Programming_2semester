#pragma once
#include "CVector2D.h"

class IPhysObject {
public:
// Масса, кг.
    virtual double mass() = 0;
// Координаты центра масс, м.
    virtual CVector2D position() = 0;
// Сравнение по массе.
    virtual bool operator== (  IPhysObject& ob )  = 0;
// Сравнение по массе.
    virtual bool operator< (  IPhysObject& ob ) = 0;
};