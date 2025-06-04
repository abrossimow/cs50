#include <stdio.h>
#include <cs50.h>

int askHeight(void);
void buildPyramid(int);
void drawChars(char character, int times);
void drawBlocks(int times);

int main(void) {
    int pyramidHeight = askHeight();
    printf("Your pyramid will be %i blocks high!\n", pyramidHeight);
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

//this was one idea we let go of.
void drawBlocks(int times) {
            for (int colBlock2 = 0; colBlock2 <= times; colBlock2++) {
            printf("#");
        }
}

/*
I get the number for the pyramidHeight (i.e. 4)
for pyramidHeight-1 until 0 do
I draw 3 _ and 1 #; that is 4-1 and 1 -> that is 4-rhe row i currently draw...
next I draw 2 _ and 2 #; that is 4-1-1 and 1+1 
next I draw 1 _ and 3 #: that is 4-1-1-1 and 1+1+1
next I draw 0 _ and 4 #; that is 4-1-1-1-1 and 1+1+1+1
*/