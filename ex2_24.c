/* Exercise 2.24: Odd or Even */
#include <stdio.h>

int main(void)
{
   int number;

   printf("Enter an integer: ");
   scanf("%d", &number);

   if (number % 2 == 0) {
      printf("%d is even\n", number);
   }

   if (number % 2 != 0) {
      printf("%d is odd\n", number);
   }

   return 0;
}