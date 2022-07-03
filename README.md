## Validate a Credit Card Number -- [Luhn Algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm)
1. Here the first step is, we'll get the CC Number as input and we will get something called **sum** from this CC Number using two different tasks.

#### task1

- sum = 0
- CC Number: **4003600000000014** => **4 `0` 0 `3` 6 `0` 0 `0` 0 `0` 0 `0` 0 `0` 1 `4`**
1. Iterate through the CC number
2. Use modulo to get the last digit
3. Add last digit to sum
4. divide the cc number by 100
5. repeat
