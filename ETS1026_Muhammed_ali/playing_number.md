# pseudocode



## Case 1: Reverse of a Number

1. Start

2. Initialize `rev` to 0

3. Read `number`

4. While `number > 0`

   4.1 Calculate `di = number % 10`

   4.2 Update `rev = rev * 10 + di`

   4.3 Update `number = number / 10`

5. Print `rev`

6. End



## Case 2: Number of Digits

1. Start

2. Initialize `coun = 0`

3. Read `number`

4. While `number > 0`

   4.1 Increment `coun` by 1

   4.2 Update `number = number / 10`

5. Print `coun`

6. End



## Case 3: Product of Even Digits

1. Start

2. Initialize `pro = 1`

3. Read `number`

4. While `number > 0`

   4.1 Calculate `di = number % 10`

   4.2 If `di % 2 == 0`, update `pro = pro * di`

   4.3 Update `number = number / 10`

5. Print `pro`

6. End



## Case 4: Sum of First and Last Digits

1. Start

2. Read `number`

3. Calculate `last = number % 10`

4. Initialize `first = number`

5. While `first >= 10`

   5.1 Update `first = first / 10`

6. Calculate `sum = first + last`

7. Print `first`, `last`, and `sum`

8. End



## Case 5: Swap First and Last Digits

1. Start

2. Read `number`

3. If `number` has only one digit, print it and go to End

4. Calculate `last = number % 10`

5. Initialize `first = number`

6. While `first >= 10`

   6.1 Update `first = first / 10`

7. Swap `first` and `last` using a temporary variable

8. Print `first` and `last` after swapping

9. End



## Case 6: Check Palindrome

1. Start

2. Initialize `rev = 0`

3. Read `number` and store in `temp`

4. While `number > 0`

   4.1 Calculate `di = number % 10`

   4.2 Update `rev = rev * 10 + di`

   4.3 Update `number = number / 10`

5. If `rev == temp`, print "Palindrome"

6. Else, print "Not a Palindrome"

7. End



## Case 7: Frequency of First Digit

1. Start

2. Initialize `coun = 0`

3. Read `number` and store in `temp`

4. Calculate `first = number`

5. While `first >= 10`

   5.1 Update `first = first / 10`

6. While `temp > 0`

   6.1 If `temp % 10 == first`, increment `coun`

   6.2 Update `temp = temp / 10`

7. Print `coun`

8. End



## Case 8: Check Strong Number

1. Start

2. Initialize `sfac = 0`

3. Read `number` and store in `temp`

4. While `number > 0`

   4.1 Calculate `di = number % 10`

   4.2 Initialize `fac = 1`

   4.3 For `i = 1 to di`, calculate `fac = fac * i`

   4.4 Update `sfac = sfac + fac`

   4.5 Update `number = number / 10`

5. If `sfac == temp`, print "Strong Number"

6. Else, print "Not a Strong Number"

7. End



## Case 9: Check Perfect Number

1. Start

2. Initialize `sumOfDivisors = 0`

3. Read `number`

4. For `i = 1 to number / 2`

   4.1 If `number % i == 0`, update `sumOfDivisors = sumOfDivisors + i`

5. If `sumOfDivisors == number`, print "Perfect Number"

6. Else, print "Not a Perfect Number"

7. End
