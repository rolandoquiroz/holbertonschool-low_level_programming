#include <stdio.h>

int main()
{
  // An integer variable
  int shirt = 100;

  // Pointer to integer
  int *box = &shirt;

  // Pointer to pointer (double pointer)
  int **closet = &box;

  int ***room = &closet;

  printf("Color of 'shirt' is : %d\n", shirt);
  printf("Color of 'shirt' using the box is : %d\n", *box);
  printf("Color of 'shirt' using the closet and the box is : %d\n", **closet);
  printf("Color of 'shirt' using the room, the closet and the box is : %d\n", ***room);

  return (0);
}

