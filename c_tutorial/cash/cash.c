#include <stdio.h>
#include <cs50.h>

int main(void) {
    int coinsNeeded = 0;
    // Ask user for input of change as int
    int change = get_int("How much change? ");

    // until change == 0 try to find coins and reduce change amount
    // try highest valued coin first, 25. if change >= 25 then reduce change by 25 and add 1 to coinsNeeded
    // try next highest valued coin 10... reduce change by 10 and add 1 to coinsNeeded
    // try next highest coin 5 and to the same
    // try last coind and do the same
    while (change > 0) {
        if (change >= 25) {
            change -= 25;
            coinsNeeded++;
        }
        else if (change >= 10) {
            change -= 10;
            coinsNeeded++;
        }
        else if (change >= 5) {
            change -= 5;
            coinsNeeded++;
        }
        else if (change >= 1) {
            change -= 1;
            coinsNeeded++;
        }
    }

    printf("You will need %i coins.\n", coinsNeeded);
}