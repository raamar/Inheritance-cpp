#pragma once
#include <iostream>

class Vector {
  public: 
    float x, y;
    Vector();
    Vector(float, float);
    void setCoords(float, float);
    friend std::ostream & operator << (std::ostream &, const Vector &);
};