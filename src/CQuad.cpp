#include "../include/CQuad.h"

CQuad::CQuad() {
  verticesNum = 4;
}

CQuad::CQuad(Vector * _vertices) {
  verticesNum = 4;
  vertices = new Vector[verticesNum];

  for (int point = 0; point < verticesNum; point++)
    vertices[point] = Vector(_vertices[point].x, _vertices[point].y);
}

CQuad::~CQuad() { 
  delete vertices;
};

float CQuad::getArea() {
  float area = 0;
  int j = verticesNum - 1;

  for (int i = 0; i < verticesNum; i++) {
    area += (vertices[i].x + vertices[j].x) * (vertices[i].y - vertices[j].y);
    j = i;
  }

  return abs(area / 2);
}

void CQuad::showPoints() {
  for (size_t vertix = 0; vertix < verticesNum; vertix++) {
    std::cout << "\tPoint #" << vertix + 1 << "\t" << vertices[vertix] << std::endl;
  }
}

std::string CQuad::getTitle() {
  return "Quad";
}