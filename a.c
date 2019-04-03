#include <stdio.h>

char enter (char x);

int main() {

    int x = 50;
    int *ip;
    
    *ip = &x;
    
    scanf("%d", &x);
    
    printf ("%d \n", x);
    
    printf ("%d \n", *ip);
  
  return 0;
  
 }
