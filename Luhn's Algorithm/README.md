
# Credit Card Validation using Luhn's Algorithm

This is a simple guide on how to determine if a credit card number is valid, based on Luhn’s algorithm, which was invented by Hans Peter Luhn of IBM.

## Algorithm Steps

1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
2. Add the sum to the sum of the digits that weren’t multiplied by 2.
3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

## What I did differently

1. Starting from the rightmost digit, I multiplied every even-indexed digit by 2 and subtracted the result from 9 if it was greater than 9. Then, I added the resulting digits together.
2. I added the sum from step 1 to the sum of the odd-indexed digits.
3. If the total sum ends in a 0 (or, more formally, if the total sum modulo 10 is congruent to 0), then the credit card number is valid according to Luhn's algorithm.

### Example

Let's say we have a credit card number 4003 6000 0000 0014. Here's how we would apply Luhn's algorithm:

1: Starting from the rightmost digit, we multiply every even-indexed digit by 2 and subtract the result from 9 if it's greater than 9:

```markdown
index: 0 |1 |2 |3 |4 |5 |6 |7 |8 |9 |10 |11 |12 |13 |14 |15
value: 4 |0 |0 |3 |6 |0 |0 |0 |0 |0 |0  |0  |0  |0  |1  |4
```

* Starting from the rightmost digit, we multiply every even-indexed digit by 2:

```markdown
even-indexed: 14  |12 |10 |8  |6  |4  |2  |0
values:        1  |0  |0  |0  |0  |6  |0  |4

Multiply:     1*2 |0*2|0*2|0*2|0*2|6*2|0*2|4*2
Result:        2  |0  |0  |0  |0  |12 |0  |8
```

* subtract the result from 9 if it's greater than 9:

```markdown
Result:       2| 0 | 0 | 0 | 0 | 12 | 0 | 8
greaterThan9:                    -9

Result:  2 | 0 | 0 | 0 | 0 | 3 | 0 | 8
Sum1: 2 + 0 + 0 + 0 + 0 + 3 + 0 + 8 = 13
```

2: I added the sum from step 1 to the sum of the odd-indexed digits.

```markdown
index: 0 |1 |2 |3 |4 |5 |6 |7 |8 |9 |10 |11 |12 |13 |14 |15
value: 4 |0 |0 |3 |6 |0 |0 |0 |0 |0 |0  |0  |0  |0  |1  |4
```

```markdown
odd-indexed: 15 |13 |9  |7  |5  |3  |1  
values:      4  |0  |0  |0  |0  |3  |0

Sum1 + Sum2
Sum2: 4 + 0 + 0 + 0 + 0 + 3 + 0 = 7

sum1 = 13
sum2 = 7

Totalsum: 13 + 7 = 20
```

3: If the total sum ends in a 0 (or, more formally, if the total sum modulo 10 is congruent to 0), then the credit card number is valid according to Luhn's algorithm.

```markdown
Toatalsum = 20 (valid)

or

20 % 10 = 0 (valid)
```

That's it!

# Still Confused!😕

## contact me

* [Twitter](https://twitter.com/0xdeerah)
* [linkedIn](https://www.linkedin.com/in/0xdeerah)
* [Instagram](https://www.instagram.com/0xdeerah/)
