/* Exercise 2.33: Car-Pool Savings Calculator */
#include <stdio.h>

int main(void)
{
   int totalKilometers;
   int costPerLiter;
   int kilometersPerLiter;
   int parkingFees;
   int tolls;
   int gasolineCost;
   int totalCost;

   printf("Enter the total kilometers driven today: ");
   scanf("%d", &totalKilometers);

   printf("Enter the cost per liter of gasoline: ");
   scanf("%d", &costPerLiter);

   printf("Enter the average kilometers per liter: ");
   scanf("%d", &kilometersPerLiter);

   printf("Enter the parking fees for the day: ");
   scanf("%d", &parkingFees);

   printf("Enter the tolls for the day: ");
   scanf("%d", &tolls);

   if (kilometersPerLiter == 0) {
      printf("\nKilometers per liter cannot be zero.\n");
      return 0;
   }

   gasolineCost = totalKilometers * costPerLiter / kilometersPerLiter;
   totalCost = gasolineCost + parkingFees + tolls;

   printf("\nGasoline cost: %d\n", gasolineCost);
   printf("Parking fees:  %d\n", parkingFees);
   printf("Tolls:         %d\n", tolls);
   printf("Total cost of driving today: %d\n", totalCost);

   return 0;
}