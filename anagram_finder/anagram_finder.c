#include <stdio.h>
#include <string.h>
int main() 
{
  //initialization for counters a, b, c, d
  int counter1[] = {0, 0, 0, 0}; 
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";

//counting the characters in string 1
  for (int i = 0; i < strlen(s1); i++){
    if (s1[i] == 'a'){
      counter1[0]++;
    }
    if (s1[i] == 'b'){
      counter1[1]++;
    }
    if (s1[i] == 'c'){
      counter1[2]++;
    }
    if (s1[i] == 'd'){
      counter1[3]++;
    }
    if (s1[i] == ' '){
      continue;
    }
  }

//counting the characters in string 2
  for (int i = 0; i < strlen(s2); i++){
    if (s2[i] == 'a'){
      counter2[0]++;
    }
    if (s2[i] == 'b'){
      counter2[1]++;
    }
    if (s2[i] == 'c'){
      counter2[2]++;
    }
    if (s2[i] == 'd'){
      counter2[3]++;
    }
    if (s2[i] == ' '){
      continue;
    }
  }
  int flag = 0;
  for (int i = 0; i < 4; i++){
    if (counter1[i] != counter2[i]){
      flag = 1;
      break;
    }
  }
  if (flag = 0)
    printf("Anagrams\n");
  if (flag = 1)
  printf("Not Anagrams\n");

  
}
