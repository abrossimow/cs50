#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    int quarterNeeded = 0;
    int dimeNeeded = 0;
    int nickelNeeded = 0;
    int pennieNeeded = 0;
    int coinsNeeded;

    int change = get_int("How much change? ");
    while (change > 0) {
        if (change >= 25) {
            change -= 25;
            quarterNeeded++;
        }
        else if (change >= 10) {
            change -= 10;
            dimeNeeded++;
        }
        else if (change >= 5) {
            change -= 5;
            nickelNeeded++;
        }
        else if (change >= 1) {
            change -= 1;
            pennieNeeded++;
        }
    }
    coinsNeeded = quarterNeeded + dimeNeeded + nickelNeeded + pennieNeeded;
    printf("You will need %i coins.\n", coinsNeeded);
    printf("That would be:\n%i Quarter\n%i Dime\n%i Nickel\n%i Pennies\n", quarterNeeded, dimeNeeded, nickelNeeded, pennieNeeded);
}