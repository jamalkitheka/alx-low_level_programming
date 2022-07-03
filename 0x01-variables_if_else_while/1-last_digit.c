#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  * main - Entry point
 *   * LastDigit - the string of numbers
 *    * @num: the last digit of the string
 *     * Return: Always 0 (Success)
 *      */
int Last_Digit(int num);
int main(void)

{
int n;
int LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;

LastDigit = n % 10;

printf("Last digit of ");
printf("%d ", n);

printf("is ");

if (LastDigit > 5)
{
printf("%d and is greater than 5\n", LastDigit);
}

if (LastDigit == 0)

{
printf("%d and is 0\n", LastDigit);
}

if (LastDigit < 6 && LastDigit != 0)
{
printf("%d and is less than 6 and not 0\n", LastDigit);
}
return (0);
}
