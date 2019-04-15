#include <stdio.h>

int main(void) {
    
    char c[1024];
    int x, i;
    
    printf("Enter Sentence to Cipher: ");
    gets(c);
    
    printf("Ciphered code is : ");
    
    for (i = 0; c[i] != '\0'; i++) {
    
        x = c[i];
        
        if (x <= 'z' && x >= 'a') {
            
            x++;
            
        } else if (x <= 'Z' && x >= 'A') {
            
            x++;
            
        }
        if (x == 91) {
            
            x = 65;
        
        } else if (x == 123) {
            
            x = 97;
        
        }
        
    c[i] = x;
    
    printf("%c", c[i]);
    
    }
    
    printf("\n");

}
