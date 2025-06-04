#include <stdio.h>
#include <cs50.h>

int askHeight(void);
void buildPyramid(int);
void drawChars(char character, int times);

int main(void) {
    int pyramidHeight = askHeight();
    printf("Your pyramid will be %i blocks high!\n\n\n\n", pyramidHeight);
    buildPyramid(pyramidHeight);
}

int askHeight(void) {
    int i;
    int max = 8;
    do {
        i = get_int("How high shall the pyramid be? ");
        if (i > max) {
            printf("That would be too big. Maximal size is %i.\nAgain: ", max);
        }
        else if (i <= 0) {
            printf("That is too small. It should be at least 1, right? \nAgain: ");
        }
        // Here, an additional, friendly prompt to use nubmers would be great but get_int() takes care of that internally.
        // I don't know how to get a return value from that...or if it is possible as such.
    }
    while (i == 0 || i <= 0 || i > max);
    return(i);
}

void buildPyramid(int pyramidHeight) {
    for (int row = 0; row < pyramidHeight; row++) {
        drawChars(' ', pyramidHeight-row);
        drawChars('#', row);
        printf(" ");
        drawChars('#', row);
        printf("\n");
    }
}

void drawChars(char character, int times) {
    for (int i = 0; i <= times; i++) {
    printf("%c", character);
        }
}