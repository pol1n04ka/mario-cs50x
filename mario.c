#include <stdio.h>

void PrintHashes(int quantity)
{
  for (int j = 0; j < quantity; j++)
  {
    printf("#");
  }
}

void CreateStairs(int height)
{
  for (int step = 1; step <= height; step++)
  {
    printf("%*s", height - step, "");

    PrintHashes(step);

    printf("%2s", "");

    PrintHashes(step);

    printf("\n");
  }
}

int main(void)
{
  int input;
  int checkInput;

  printf("Enter height of the ladder: ");
  checkInput = scanf("%i", &input);

  if (checkInput != 1 || input <= 0)
  {
    printf("Wrong input, try again.\n");
    return 1;
  }
  else
  {
    char extraInput[100];
    if (scanf("%99[^\n]", extraInput) == 1)
    {
      printf("[WARNING] Extra input detected - %s, we'll use valid input - %i\n", extraInput, input);
    }
    CreateStairs(input);
  }

  return 0;
}