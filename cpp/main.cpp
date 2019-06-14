#include "roulette.h"

int main() {
    RouletteWheel board = RouletteWheel();
    RouletteResult result = board.generateResult();
    cout << result.number << endl;
    cout << result.color << endl;
    return 0;
}