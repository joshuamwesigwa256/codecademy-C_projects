#include <stdio.h>

int main() {
  char prompt_to_fight[4];
  printf("Hello there, if you are reading this, you have been enlisted for the interplanetary boxing competitions, type \"yes\" if you agree to fight:\n");
  scanf("%s", prompt_to_fight);
if (prompt_to_fight != "yes")
    printf("Invalid input, nevertheless, you have to fight\n");

  int planet;
  printf("What is your planet? (input any number from 1 to 7 to be assigned a planet plus the Relative Gravity there):\n");
  scanf("%d", &planet);
  

  switch (planet) {
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
  printf("Thankyou for the bravery, you will receive an email with the details of when you are set to travel and battle the aliens. I promise you, you are bound to lose\n");


}
