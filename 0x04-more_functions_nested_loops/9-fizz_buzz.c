#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */

int main(void)
{
  int a;

  for (a = 1; a < 100; a++)
    if (a % 15 == 0)
      {
	printf("FizzBuzz ");
      }
    else if (a % 5 == 0)
      {
	printf("Buzz ");
      }
    else if (a % 3 == 0)
      {
	printf("Fizz ");
      }
    else
      {
	printf("%d ", a);
      }
  printf("Buzz");
  printf("\n");
  return (0);
}
