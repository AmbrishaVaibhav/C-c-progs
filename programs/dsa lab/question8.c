#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int *numbers, i, std, mean = 0;
  double *fin, *dev;
  numbers = (int *)malloc(20 * sizeof(int));
  fin = (double *)malloc(20 * sizeof(double));
  dev = (double *)malloc(20 * sizeof(double));
  printf("\n");

  for (i = 0; i < 20; ++i)
  {
    printf("Enter the number %d :", i + 1);
    scanf("%d", numbers + i);
    mean = mean + *(numbers + i);
  }
  mean = mean / 20;
  std = 0;
  for (i = 0; i < 20; ++i)
  {
    *(fin + i) = *(numbers + i) - mean;
    *(dev + i) = pow(*(fin + i), 2);
    std += *(dev + i);
  }

  double stdev = std / 20;
  stdev = sqrt(stdev);
  printf("The std = %.2lf", stdev);

  return 0;
}