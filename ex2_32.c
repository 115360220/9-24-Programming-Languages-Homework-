/* Exercise 2.32: Body Mass Index Calculator */
#include <stdio.h>

int main(void)
{
   int weightInKilograms;
   int heightInCentimeters;
   int bmi;

   printf("Enter your weight in kilograms: ");
   scanf("%d", &weightInKilograms);

   printf("Enter your height in centimeters: ");
   scanf("%d", &heightInCentimeters);

   bmi = weightInKilograms * 10000 / (heightInCentimeters * heightInCentimeters);

   printf("\nYour BMI is %d\n", bmi);

   printf("\nBMI VALUES\n");
   printf("Underweight: less than 18.5\n");
   printf("Normal:      between 18.5 and 24.9\n");
   printf("Overweight:  between 25 and 29.9\n");
   printf("Obese:       30 or greater\n");

   return 0;
}