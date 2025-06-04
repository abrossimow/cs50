#include <stdio.h>
#include <cs50.h>

char* askString(char* question) {
    printf("%s\n", question);
    char answer[] = scanf(getc(stdin), "%s", answer);
    return answer;
};

int main() {
    printf("The goal here is to create a function for easy questions and answers.\n");
    printf("Just like in the CS50 Class.\n");
    string question1 = askString("So, what is your name?");
    printf("Nice to meet you, %s!\n", question1);
}