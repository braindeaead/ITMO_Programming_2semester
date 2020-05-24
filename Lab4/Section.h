#pragma once
#include "IPhysObject.h"
#include "IPrintable.h"
#include "IGeoFig.h"
#include "IDialogInitiable.h"
#include "BaseCObject.h"
#include "CVector2D.h"
#include "United.h"

class Section : public United {
private:
    double a;
    double b;
    double Mass;
    CVector2D pos{};

public:
    Section();
    Section(double a, double b, double mass_, CVector2D& pos);
    Section(const Section& section);
    ~Section();

    double square() override;
    double perimeter() override;
    double mass() override;
    CVector2D position() override;
    bool operator==( IPhysObject& ob ) override;
    bool operator<( IPhysObject& ob ) override;
    void draw() override;
    void initFromDialog() override;
    unsigned int size() override;
    const char *classname() override;
};

