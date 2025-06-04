// Divides change into provided coins and tells user how many (of each) coins are needed.
// Task from problem set 1 of CS50 2025
// 4th design as reduced as my brain could make it.

#include <cs50.h>
#include <stdio.h>

int tryCoin(int value, int changeLeft);

// Global coin counter
int coinCounter;

int main(void) {
    // Validate user input
    int changeLeft = 0;
    do {
        changeLeft = get_int("How much CHANGE you got? ");
    }
    while (changeLeft < 1);

    printf("You will need:\n");

    // Define and test coins as long as we have change left.
    while (changeLeft > 0) {
        changeLeft = tryCoin(25, changeLeft);
        changeLeft = tryCoin(10, changeLeft);
        changeLeft = tryCoin(5, changeLeft);
        changeLeft = tryCoin(1, changeLeft);
    }
    printf("Which makes %i in total.\n", coinCounter);
}

// Divides changeLeft by value and returns the remaining change. Also prints division result and changes global counter.
int tryCoin(int value, int changeLeft) {
    int coinsUsed = changeLeft / value;
    changeLeft %= value;
    coinCounter += coinsUsed;
    printf("%i: %i\n", value, coinsUsed);
    return(changeLeft);
}