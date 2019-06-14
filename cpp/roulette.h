#include <iostream>

using namespace std;

enum Color { red, black, green };

struct RouletteResult {
  int number;
  Color color;
};

struct RouletteWheel {
    int getNumber();
    Color getNumberColor(int number); 
    RouletteResult generateResult();
    RouletteWheel();
};

