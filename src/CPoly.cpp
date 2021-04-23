#include <cmath>
#include "../include/CPoly.h"

CPoly::CPoly() { };

CPoly::CPoly(Vector * _vertices) {
  vertices = _vertices;
};

CPoly::~CPoly() { };