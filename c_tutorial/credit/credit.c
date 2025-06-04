// Credit Card number validation tool.
// Task from problem set 1 of CS50 2025
// 1st design

#include <stdio.h>
#include <cs50.h>

bool validate(void);
int checkBrand(void);

// Credit Card Number from user input. Global scope.
long userCreditCardNumber;

int main(void)
{
    // Status of basic validity
    bool userCreditCardNumberFirstCheck = 0;
    // Known credit card boundaries
    long minUUID = 4000000000000, maxUUID = 5599999999999999;
    do
    {
        userCreditCardNumber = get_long("Please enter your credit card number: ");
        if (userCreditCardNumber <= minUUID || userCreditCardNumber > maxUUID)
        {
            printf("This is not a credit card number...\n");
        }
        else
        {
            userCreditCardNumberFirstCheck = 1;
        }
    }
    while (!userCreditCardNumberFirstCheck);
    // printf("Your number is: %li \n", userCreditCardNumber);
    if (validate())
    {
        printf("This seems to be legit.\n");
        printf("BRAND:\n");
        switch(checkBrand())
        {
            case 0:
                printf("VISA\n");
                break;
            
            case 1:
                printf("AMERICAN EXPRES\n");
                break;

            case 2:
                printf("MASTER CARD\n");
                break;

            default:
                printf("INVALID\n");
                break;
        }
    }
    else
    {
        printf("This is not a valid credit card number, friend.\n");
        printf("INVALID\n");
    }
}

// Validates a provided credit card number by checking Luhn's algorithm.
bool validate(void)
{
    long cacheNumber = userCreditCardNumber;
    int sumEven = 0, sumOdd = 0, counterDigits = 0, cacheOdd = 0;
    char gateOddEven = 'e';
    while (cacheNumber > 0)
    {
        switch(gateOddEven)
        {
            case 'e':
                sumEven += cacheNumber % 10;
                cacheNumber /= 10;
                counterDigits++;
                gateOddEven = 'o';
                break;

            case 'o':
                cacheOdd = cacheNumber % 10;
                cacheNumber /= 10;
                cacheOdd *= 2;
                if (cacheOdd > 10)
                {
                    sumOdd += cacheOdd % 10;
                    cacheOdd /= 10;
                    sumOdd += cacheOdd;
                }
                else
                {
                    sumOdd += cacheOdd;
                }
                counterDigits++;
                gateOddEven = 'e';
                break;
        }
    }
    // printf("Cached: sumEven %i, sumOdd %i\n", sumEven, sumOdd);
    int sumValidation = sumOdd + sumEven;
    if (sumValidation % 10 == 0)
    {
        // printf("validation hash: %i\n", sumValidation);
        return(true);
    }
    else
    {
        // printf("validation hash: %i\n", sumValidation);
        return(false);
    }
}

int checkBrand(void)
{
    int cacheNumber = userCreditCardNumber;
    while (cacheNumber > 100)
    {
        cacheNumber /= 10;
    }
    printf("Brand number: %i\n", cacheNumber);

    //loop through ccnumber, safe remainder to tempNumber until ccnumber <100
    //look at tempNumber and work through defined states
    return(0);
}
