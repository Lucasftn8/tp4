#include <stdio.h> 
#include <malloc.h> 

int main(void) 
{ 
  int* p = malloc(sizeof(int)); 
  *p = 100;
  free(p);
  *p = 110;
  printf("%d\n",*p);  
  return 0; 
}
