#include<stdio.h>

long long int recusionFactorial(int number)
{
    if (number >= 1)
    {
        return number * recusionFactorial(number - 1);
    }

    else
    {
        return 1;
    }
}

int main()
{
    int number;

    printf("Enter an integer number: ");

    scanf("%d",&number);

    if (number < 0)
    {

        printf("Undefined!!\nFactorial of a negative numbers is undefined.\n");

        return 0;
    }

    printf("Factorial of %d = %lld", number, recusionFactorial(number));

    return 0;
}

