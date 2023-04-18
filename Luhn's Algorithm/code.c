#include <stdio.h>
#include <string.h>
#include <ctype.h>

int validateCreditCard(char[]);
void typeOfCreditCard(char[]);

int main(void) {
    
    char creditCardNumber[17];

    // Validating user input
    do {
        askUserAgain:
        printf("Enter a number: ");
        scanf("%s", creditCardNumber);
        
        int len = strlen(creditCardNumber);
        for (int i = 0; i < len; i++) {
            if (!isdigit(creditCardNumber[i]))
                goto askUserAgain;
        }
    } while (strlen(creditCardNumber) < 0);
    
    if (validateCreditCard(creditCardNumber))
        typeOfCreditCard(creditCardNumber);
    else
        printf("INVALID\n");

  return 0;
}

int validateCreditCard(char creditCardNumber[]) {
    int sum = 0, counter;

    // Looping over every other digit starting from the last-digit left.
    for (counter = strlen(creditCardNumber) - 1; counter >= 0; counter -= 2)
        sum += creditCardNumber[counter] - '0';

    // Looping over every other digit starting from the second-last-digit left.
    for (counter = strlen(creditCardNumber) - 2; counter >= 0; counter -= 2) {
        int evenIdxDigit = (creditCardNumber[counter] - '0') * 2;
        sum += (evenIdxDigit > 9) ? (evenIdxDigit - 9) : evenIdxDigit;
    }

    return sum % 10 == 0;
}

void typeOfCreditCard(char creditCardNumber[]) {
    int len = strlen(creditCardNumber), firstDigit = creditCardNumber[0] - '0',
        secondNum = creditCardNumber[1] - '0', firstTwoDigit = firstDigit * 10 + secondNum;

    if (firstDigit == 4 && (len == 13 || len == 16))
        printf("VISA\n");
    else if ((firstTwoDigit == 34 || firstTwoDigit == 37) && len == 15)
        printf("AMEX\n");
    else if (firstTwoDigit >= 51 && firstTwoDigit <= 55 && len == 16)
        printf("MASTERCARD\n");
    // TODO: Add more test case for other popular cards
    else
        printf("INVALID\n");
}
