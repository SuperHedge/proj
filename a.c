#include <stdio.h>

char enter (char x[1024]);

char main(void) {
    
    char c;
    char f[1024];
    
    c = enter(f);
    
    printf("%s\n", f);
  
 }
 
char enter (char x[1024]) {
     
    scanf("%s", x);
     
    return 0;
 }
