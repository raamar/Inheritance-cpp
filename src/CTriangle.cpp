#include "../include/CTriangle.h"

CTriangle::CTriangle() {
  verticesNum = 3;
}

CTriangle::CTriangle(Vector * _vertices) {
  verticesNum = 3;
  vertices = _vertices;
}

CTriangle::~CTriangle() { };

float CTriangle::getArea() {
  float area = 0;
  int j = verticesNum - 1;

  for (int i = 0; i < verticesNum; i++) {
    area += (vertices[i].x + vertices[j].x) * (vertices[i].y - vertices[j].y);
    j = i;
  }

  return abs(area / 2);
}

void CTriangle::showPoints() {
  for (size_t vertix = 0; vertix < verticesNum; vertix++) {
    std::cout << "\tPoint #" << vertix + 1 << "\t" << vertices[vertix] << std::endl;
  }
}

std::string CTriangle::getTitle() {
  return "Triangle";
}