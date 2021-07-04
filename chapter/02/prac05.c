#include <stdio.h>

void br(void);
void ic(void);

int main(void)
{
  br();
  ic();
  printf("Brazil, Russia, \nIndia, China");
  return 0;
}

void br(void)
{
  printf("Brazil, Russia, ");
}

void ic(void)
{
  printf("India, China\n");
}

