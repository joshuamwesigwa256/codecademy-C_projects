#include <stdio.h>
int main() {
  int planet = 1;

  switch (planet) 
{
    case 1:
      printf("Mercury with the Relative Gravity of 0.38\n");
      break;
    case 2:
      printf("Venus with the Relative Gravity of 0.91\n");
      break;
    case 3:
      printf("Mars with the Relative Gravity of 0.38\n");
      break;
    case 4:
      printf("Jupiter with the Relative Gravity of 2.34\n");
      break;
    case 5:
      printf("Saturn with the Relative Gravity of 1.06\n");
      break;
    case 6:
      printf("Uranus with the Relative Gravity of 0.92\n");
      break;
    case 7:
      printf("Neptune with the Relative Gravity of 1.19\n");
      break;
    default:
      printf("Planet doesn't exist\n");
      break;

  }

}
