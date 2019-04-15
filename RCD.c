#include <stdio.h>

int main(void) {
    
    char c[1024];
    int x, i;
    
    printf("Enter Sentence to Dipher: ");
    gets(c);
    
    printf("Diphered code is : ");
    
    for (i = 0; c[i] != '\0'; i++) {
    
        x = c[i];
        
        if (x <= 'z' && x >= 'a') {
            
            x--;
            
        } else if (x <= 'Z' && x >= 'A') {
            
            x--;
            
        }
        if (x == '@') {
            
            x = 'Z';
        
        } else if (x == '`') {
            
            x = 'z';
        
        }
        
    c[i] = x;
    
    printf("%c", c[i]);
    //printf("%d", x);
    
    }
    
    printf("\n");

}
