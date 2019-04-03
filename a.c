#include <stdio.h>

int main() {

    char a[5] = {'h','e','l','l','o'};
    char *ch;
    
    *ch = &a[5];
    
    scanf("%s", &a);
    
    printf ("%s \n", a);
    
    printf ("%s \n", *ch);
  
  return 0;
  
 }
