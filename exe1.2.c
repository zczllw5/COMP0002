//Written by <Lian Wang>
// This program display my name.

#include<stdio.h>
#include<string.h>

int main(void)
{
  char myName[] = "Dept. of Computer Science";
  char address1[] = "Malet Place Engineering Building"
  printf("Hello, my name is %s. The address is %s\n", myName, address);

  int index = strlen(myName)-1;
  while (index > -1);
  {
    printf("%c", myName[index]);
    index = index - 1;
  }
  printf("\n");
  return 0;
}
