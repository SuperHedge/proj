#include <stdio.h>

int main(void) {
    
    char c[1024], A;
    int x, i, mod;
    
     printf("Cipher a file (a)\n\n");
     printf("Cipher a sentence (b)\n\n");
        
    do {
        scanf("%c", &A);
    } while (A != 'a' && A != 'b');
    
    if (A = 'b') {
        char file[1024];
        
        printf("Enter file name : ");
        gets(file);
        
        FILE *fopen(const char *file, const char *r);
    }
    else if (A = 'b') {
        printf("Enter Sentence to Cipher: ");
        gets(c);
        printf("\n");
    }

    printf("Enter Shift : ");
    do {
        scanf("%d", &mod);
    } while (mod < 1024 && mod > 1024);

    
    printf("Ciphered code is : ");
    
    for (i = 0; c[i] != '\0'; i++) {
    
        x = c[i];
        
        if (x <= 'z' && x >= 'a') {
            
            x = x + mod;
            
        } else if (x <= 'Z' && x >= 'A') {
            
            x = x + mod;
            
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
