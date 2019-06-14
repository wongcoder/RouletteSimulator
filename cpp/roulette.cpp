// Coding the really basic class in both langauges right now to decide what I want to stick with.

// Coding style for this quick project:
// Structs over classes (lets me code quicker)
// std namespace (lets me code quicker)

#include "roulette.h"
#include <stdlib.h>     /* srand, rand */

int RouletteWheel::getNumber() {
    return rand() % 36;
}   

Color RouletteWheel::getNumberColor(int number) {
    if ( number >= 1 && number <= 10 || number >= 19 && number <= 28 ) {
        return (number % 2 == 0) ? black : red;
    }
    
    else if ( number >= 11 && number <= 18  || number >= 29 && number<=36) {
        return (number % 2 == 0) ? red : black;
    }
        
    else {
        cout << "Something went wrong in the number generation process" << endl;
        exit(EXIT_FAILURE);
    }

}

RouletteResult RouletteWheel::generateResult() {
    RouletteResult result = RouletteResult();
    result.number = getNumber();
    result.color = getNumberColor(result.number);
    return result;
}