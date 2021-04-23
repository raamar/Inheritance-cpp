#pragma once
#include "../include/Vector.h"

class CPoly {
  protected:
    Vector * vertices;
    size_t verticesNum = 0;
  public:
    CPoly();
    CPoly(Vector * _vertices);
    ~CPoly();
    virtual float getArea() = 0;
    virtual void showPoints() = 0;
    virtual std::string getTitle() = 0;
};