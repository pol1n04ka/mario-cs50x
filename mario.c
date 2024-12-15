#include <stdio.h>

void printHashes(int quantity)
{
  for (int j = 0; j < quantity; j++)
  {
    printf("#");
  }
}

void mario(int height)
{
  for (int step = 1; step <= height; step++)
  {
    printf("%*s", height - step, "");

    printHashes(step);

    printf("%2s", "");

    printHashes(step);

    printf("\n");
  }
}

int main(void)
{
  int input;
  int check;

  printf("Enter height of the ladder: ");
  check = scanf("%i", &input);

  // TODO: add verification for the input

  mario(input);

  return 0;
}