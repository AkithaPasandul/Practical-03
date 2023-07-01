#include <stdio.h>

int main()
{
  char ch;
  for (ch = 'A'; ch <= 'Z'; ch++)
  {
    printf("%c = %d\n", ch, ch);
  }
  for (ch = 'a'; ch <= 'z'; ch++)
  {
    printf("%c = %d\n", ch, ch);
  }

  for (ch = '0'; ch <= '9'; ch++)
  {
    printf("%c = %d\n", ch, ch);
  }

  printf("  = %d\n", ' ');
  printf("$ = %d\n", '$');
  printf("* = %d\n", '*');
  printf("+ = %d\n", '+');
  printf("/ = %d\n", '/');
}
