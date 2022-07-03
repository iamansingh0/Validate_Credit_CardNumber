## Validate a Credit Card Number -- [Luhn Algorithm](https://en.wikipedia.org/wiki/Luhn_algorithm)
1. Here the first step is, we'll get the CC Number as input and we will get something called **sum** from this CC Number using two different tasks.

#### task1

1. Iterate through the CC number
2. Use modulo to get the last digit
3. Add last digit to sum
4. divide the cc number by 100
5. repeat

```
- sum = 0
- CC Number: **4003604000600014** => **4 `0` 0 `3` 6 `0` 4 `0` 0 `0` 6 `0` 0 `0` 1 `4`**
- sum += 4 + 0 + 0 + 0 + 0 + 0 + 3 + 0 => **sum = 7**
```

#### task2

1. We want to start from the second last digit
2. Divide the CC number by 10
3. Iterate through the CC number
4. Use modulo to get the last digit
5. Add last digit multiplied by 2 to the sum
   1. use modulo for the last digit
   2. use division for the 1st digit
   3. sum these two
6. Divide the CCNumber by 100
7. repeat

```
- sum = 7
- CC Number: **4003604000600014** => **`4` 0 `0` 3 `6` 0 `4` 0 `0` 0 `6` 0 `0` 0 `1` 4**
- sum += (1x2) + (0x2) + (6x2) + (0x2) + (4x2) + (6x2) + (0x2) + (4x2)
- sum += 2 + 0 + (1+2) + 0 + 8 + (1+2) + 0 + 8 => 24
- sum = 7 + 24 => **sum = 31**
```
