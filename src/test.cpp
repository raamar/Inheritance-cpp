#include <iostream>

#include "Vector.h"
#include "CTriangle.h"
#include "CPoly.h"
#include "CQuad.h"

#ifdef _WIN32
  #define CLEAR "cls"
#else
  #define CLEAR "clear"
#endif

void pause();

using namespace std;

int main() {
  Vector points[] = {
    Vector(-6, -2),
    Vector(-2, 12),
    Vector(12, 6),
    Vector(5, -6),
  };

  CPoly * shape;
  CTriangle triangle(points);
  CQuad quad(points);

  do {
    char c;

    system(CLEAR);

    cout << "Khandryga IVB-011 -- 1 VAR\n";
    cout << "1 - Triangle\n";
    cout << "2 - Quad\n";
    cout << "0 - Exit\n";
    cout << "> ";

    cin >> c;

    switch(c) {
      case '0': break;
      case '1':
        shape = &triangle;
      break;
      case '2':
        shape = &quad;
      break;
      default:
        continue;
    }

    if (c == '0') break;

    do {
      system(CLEAR);
      cout << shape->getTitle() << endl;
      cout << "1 - Show points\n";
      cout << "2 - Get area\n";
      cout << "0 - Go back\n";
      cout << "> ";

      cin >> c;

      system(CLEAR);
      switch(c) {
        case '0': break;
        case '1':
          cout << shape->getTitle() << endl;
          shape->showPoints();
          pause();
        break;
        case '2':
          cout << shape->getTitle() << endl;
          cout << "Area: " << shape->getArea() << endl;
          pause();
        break;
        default:
          continue;
      }

      if (c == '0') break;

    } while(1);
  } while(1);
  return 0;
}

void pause() {
  cout << "Press enter...";
  cin.ignore();
  cin.get();
};
