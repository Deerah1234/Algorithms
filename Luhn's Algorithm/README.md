
# Credit Card Validation using Luhn's Algorithm

This is a simple guide on how to determine if a credit card number is valid, based on Luhn’s algorithm, which was invented by Hans Peter Luhn of IBM.

## Algorithm Steps

1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
2. Add the sum to the sum of the digits that weren’t multiplied by 2.
3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

----------------------------------------------
If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!
