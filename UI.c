#include <stdio.h>
#include <strings.h>

char enter (char x[1024]);

int main(void) {
    
    char c;
    char f[1024];
    
    c = enter(f);
    
    sprintf("%c\n", c);
    
 }
 
char enter (char x[1024]) {
     
    scanf("%c", &x);
     
    return 0;
 }
