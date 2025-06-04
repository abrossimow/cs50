// Divides change into provided coins and tells user how many (of each) coins are needed.
// Task from problem set 1 of CS50 2025
// 2nd design

#include <stdio.h>
#include <cs50.h>

int checkAgainstCoin(int coinValue, int changeLeft);

int main(void) {
    int coin1 = 25;
    int coin2 = 10;
    int coin3 = 5;
    int coin4 = 1;
    int coinTotal = 0;

    int changeLeft = get_int("How much CHANGE you got? ");
    while (changeLeft > 0) {

        int quartersNeeded = checkAgainstCoin(coin1, changeLeft);
        changeLeft -= quartersNeeded*coin1;
        printf("Quarters: %i \n", quartersNeeded);

        int dimesNeeded = checkAgainstCoin(coin2, changeLeft);
        changeLeft -= dimesNeeded*coin2;
        printf("Dimes: %i \n", dimesNeeded);

        int nickelsNeeded = checkAgainstCoin(coin3, changeLeft);
        changeLeft -= nickelsNeeded*coin3;
        printf("Nickels: %i \n", nickelsNeeded);

        int penniessNeeded = checkAgainstCoin(coin4, changeLeft);
        changeLeft -= penniessNeeded*coin4;
        printf("Pennies: %i \n", penniessNeeded);

        coinTotal = quartersNeeded + dimesNeeded + nickelsNeeded + penniessNeeded;
    }
    printf("You will need %i coins in total.\n", coinTotal);
}

int checkAgainstCoin(int coinValue, int changeLeft) {
    int coinsReturn = 0;
    while (changeLeft > 0) {
        if (changeLeft >= coinValue) {
            changeLeft -= coinValue;
            coinsReturn++;
        }
        else {
            break;
        }
    }
    return(coinsReturn);
}