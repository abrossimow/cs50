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
    do {
        i = get_int("How high shall the pyramid be? ");
        if (i > 12) {
            printf("That would be too big. Maximal size is 12.\nAgain: ");
        };
    }
    while (i < 0 || i > 12);
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