#include <iostream>
#include "include/Vector.h"
#include "include/CTriangle.h"
#include "include/CPoly.h"
#include "include/CQuad.h"

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

    system("clear");

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
      system("clear");
      cout << shape->getTitle() << endl;
      cout << "1 - Show points\n";
      cout << "2 - Get area\n";
      cout << "0 - Go back\n";
      cout << "> ";

      cin >> c;

      system("clear");
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
