#pragma once
#include "IPhysObject.h"
#include "IPrintable.h"
#include "IGeoFig.h"
#include "IDialogInitiable.h"
#include "BaseCObject.h"
#include "CVector2D.h"
#include "United.h"

class Hexagon : public United {
private:
        CVector2D center;
        CVector2D R;
        CVector2D r;
        CVector2D pos;
        double mas;

public:
        Hexagon();
        Hexagon(CVector2D &r_, CVector2D &R_, CVector2D &center, CVector2D &pos, double mas);
        ~Hexagon();

        const char *classname() override;
        unsigned int size() override;
        void initFromDialog() override;
        double square() override;
        double perimeter() override;
        CVector2D position() override;
        double mass() override;
        bool operator == (IPhysObject &ob) override;
        bool operator < (IPhysObject &ob) override;
        void draw() override;
};
