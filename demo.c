#include <stdio.h>
#include <string.h>

int main(){

  printf("\nFinding words that start with fun...\n");
  
  char *p[5] = {"fundamental", "fudge", "fun", "bob", "funky"};

  int i = 0;
  while (i < 5){
    if (!strncmp("fun", p[i], 3)) printf("-%s\n" , p[i]); 
    i++;
  }
      
  //This function takes two strings as arguments and compares them
  //It returns 0 if both are the same
  //It retturns a negative number if the first string is lower in value
  //It returns a positive number if the first string is greater in value
  //Third argument tell the function how many characters to compare

}
