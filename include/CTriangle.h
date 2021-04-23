#pragma once
#include "CPoly.h"

class CTriangle : public CPoly {
  public:
    CTriangle();
    CTriangle(Vector * _vertices);
    ~CTriangle();
    float getArea();
    void showPoints();
    std::string getTitle();
};