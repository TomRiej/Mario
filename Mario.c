// Tom Rietjens
// Mario C and python Challege

#include <stdio.h>

int main() {
  const char BLOCK = '#'; // Block character is constant

  int height;
  do
  {
    printf("Enter an integer: ");
    scanf("%d", &height); // & character assigns the user input to height
  }
  while((height < 1) || (height > 23)); // do while height isn't between 0 and 23


  for (int i=1; i<=height; ++i) // repeat for each level
  {
    for (int j=0; j<height-i; ++j) // repeat prining spaces: start at height-1 spaces,
    {                              // then as i increases per level, no. spaces decreases by -1
      printf(" "); // no \n character, so spaces are printed on the same line
    }
    for (int j=0; j<=i; ++j) // i also serves as a counter for the number of blocks.
    {
      printf("%c", BLOCK);
    }
    printf("\n"); // newline character for the next time around the loop.

  }

  return 0;
}
