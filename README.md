# C Program to Find-out Factorial of a Number Using Recursion
## How factorial works in mathematics?

### The easiest to understand would be as follows:

#### The factorial is recursively defined as:

#### n!=n∗(n−1)! 

#### with 1!=1

4! = 4 x 3 x 2 x 1 = 24

3! = 4! / 4 = 6

2! = 3! / 3 n

1! = 2! / 2 = 1

0! = 1! / 1 = 1

-1! = 0! / 0 = 1 / 0 = undefined

## How this program works?

#### Suppose the user entered 6.

- Initially, recusionFactorial() is called from main() with 6 passed as an argument.
- Then, 5 is passed to recusionFactorial() from the same function (recursive call). each recursive call, the value of argument n is decreased by 1.
- When the value of n is less than 1, there is no recursive call and the factorial is returned ultimately to the main() function.
