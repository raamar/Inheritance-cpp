#pragma once
#include "CPoly.h"

class CQuad : public CPoly {
  public:
    CQuad();
    CQuad(Vector * _vertices);
    ~CQuad();
    float getArea();
    void showPoints();
    std::string getTitle();
};