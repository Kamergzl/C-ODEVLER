#include <stdio.h>

int main(void)
{
  int *ip1, *ip2, id1, id2;

  ip1 = &id1;
  ip2 = &id2;
  id1 = 3; 
  *ip2 = 5; 

  printf("id1 degiskeninin degeri: %d\n", *ip1);
  printf("id2 degiskeninin degeri: %d\n", *ip2);
  
  printf("\n\n");
  
  return 0;
}