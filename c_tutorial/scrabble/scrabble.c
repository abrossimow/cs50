// Mini scrabble-like game for two players.
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

bool checkWord(string wordToCheck);
int calculateWordValue(string wordToValue);

string wordPlayer1, wordPlayer2;
int scorePlayer1, scorePlayer2;

int main(void)
{
    printf("Player 1, what is your word?\n");
    bool inputValid = 0;
    do {
        wordPlayer1 = get_string("Player 1: ");
        inputValid = checkWord(wordPlayer1);
    }
    while (inputValid != 1);

    printf("Player 2, what is your word?\n");
    inputValid = false;
    do {
        wordPlayer2 = get_string("Player 2: ");
        inputValid = checkWord(wordPlayer2);
    }
    while (inputValid != 1);

    scorePlayer1 = calculateWordValue(wordPlayer1);
    scorePlayer2 = calculateWordValue(wordPlayer2);

    // Evaluate score
    if (scorePlayer1 > scorePlayer2)
    {
        printf("Player 1 wins!\n");
    }
    else if (scorePlayer2 > scorePlayer1)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Wow, a tie! One more round?\n");
    }

    // Establish char value with array?
    // Option: check if word exists
        // if checkWord true go on
        // if checkWord false prompt "Not a word.." and aks again
    // Ask Player 2 for input
    // Option: check if word exists
        // if checkWord true go on
        // if checkWord false prompt "Not a word.." and aks again
    // loop through wordPlayer1 characters, read value per character and add it to scorePlayer1
    // loop through wordPlayer2 characters, read value per character and add it to scorePlayer2

}

bool checkWord(string wordToCheck)
{
    string wordBuffer = toupper(wordToCheck);
    // Convert all char to upperCase
    // is it just one word? (does it have a space?)
    // does it 
    // Find reference file for all words that are considered words
    // Search algorithm to iterate through words. Go to middle first, than half every other querry
    // if wordToCheck exists in list return true
    if (toupper(wordToCheck[0]) < 65 || toupper(wordToCheck[0]) > 95)
    {
        return 0;
    }
    else
    {
        printf("First letter: %c = %i\n", wordToCheck[0], wordToCheck[0]);
        return 1;
    }
}

int calculateWordValue(string wordToValue)
{
    int alphabetSize = 23;
    // Fill new Array with alpabet
    // uppercase A is 65 Z is 90
    // char alphabetChars = fillAlphabet();
    // int* charValues[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    // int* wordValue[alphabetSize][alphabetSize] = {{65},{charValues}};
    return 5;
}