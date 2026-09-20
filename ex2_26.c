/* Exercise 2.26: Multiples */
#include <stdio.h>

int main(void)
{
   int first, second;

   printf("Enter two integers: ");
   scanf("%d%d", &first, &second);

   if (second == 0) {
      printf("The second integer cannot be zero.\n");
      return 0;
   }

   if (first % second == 0) {
      printf("%d is a multiple of %d\n", first, second);
   }

   if (first % second != 0) {
      printf("%d is not a multiple of %d\n", first, second);
   }

   return 0;
}