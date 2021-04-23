#include "../include/Vector.h"

Vector::Vector() { };

Vector::Vector(float _x, float _y) {
  setCoords(_x, _y);
};

void Vector::setCoords(float _x, float _y) {
  x = _x; 
  y = _y;
};

std::ostream & operator << (std::ostream &out, const Vector &vector) {
  out << "x: " << vector.x << "\t\ty: " << vector.y;
  return out;
}