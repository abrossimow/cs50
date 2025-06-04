// Divides change into provided coins and tells user how many (of each) coins are needed.
// Task from problem set 1 of CS50 2025
// 3rd design
#include <cs50.h>
#include <stdio.h>

int main(void) {
    int valueCoin1 = 25;
    int valueCoin2 = 10;
    int valueCoin3 = 5;
    int valueCoin4 = 1;

    int neededCoin1 = 0;
    int neededCoin2 = 0;
    int neededCoin3 = 0;
    int neededCoin4 = 0;
    
    int changeLeft = get_int("How much CHANGE you got? ");
    printf("You will need:\n");

    while (changeLeft > 0) {
        neededCoin1 = changeLeft / valueCoin1;
        changeLeft %= valueCoin1;
        printf("Quarters: %i\n", neededCoin1);

        neededCoin2 = changeLeft / valueCoin2;
        changeLeft %= valueCoin2;
        printf("Dimes: %i\n", neededCoin2);
        
        neededCoin3 = changeLeft / valueCoin3;
        changeLeft %= valueCoin3;
        printf("Nickels: %i\n", neededCoin3);

        neededCoin4 = changeLeft / valueCoin4;
        changeLeft %= valueCoin4;
        printf("Pennies: %i\n", neededCoin4);
    }

    int neededCoinTotal = neededCoin1 + neededCoin2 + neededCoin3 + neededCoin4;
    printf("Which makes %i in total.\n", neededCoinTotal);
}