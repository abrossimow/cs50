#include <cs50.h>
#include <stdio.h>

// Based off cash3 -> now let's compress into one function. BUT: we will not use usa coin names anymore...

int tryCoin(int value, int changeLeft);
int coinCounter;

int main(void) {
    int changeLeft = 0;
    do {
        changeLeft = get_int("How much CHANGE you got? ");
    }
    while (changeLeft < 1);

    printf("You will need:\n");

    while (changeLeft > 0) {
        changeLeft = tryCoin(25, changeLeft);
        changeLeft = tryCoin(10, changeLeft);
        changeLeft = tryCoin(5, changeLeft);
        changeLeft = tryCoin(1, changeLeft);
    }
    printf("Which makes %i in total.\n", coinCounter);
}

int tryCoin(int value, int changeLeft) {
    int coinsUsed = changeLeft / value;
    changeLeft %= value;
    coinCounter += coinsUsed;
    printf("%i: %i\n", value, coinsUsed);
    return(changeLeft);
}