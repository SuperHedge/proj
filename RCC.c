#include <stdio.h>

int main() {
    
    char c[1024];             //declaring some variables
    int x, i, mod;
    
    printf("Enter Sentence to Cipher: ");
    gets(c);
    
    do {
        printf("Enter Shift : ");           // Need to compensate if a number is entered >9 //
        scanf("%d", &mod);
    } while (mod < 10 && mod > 0);

    
    printf("Ciphered code is : ");
    
    for (i = 0; c[i] != '\0'; i++) {        // this 'for' loop is to cycle through each character given.
    
        x = c[i];                           // convet the character into a number
        
        if (x <= 'z' && x >= 'a') {         // if the character is lowercase it goes through this 'if' statement
            
            x = x + mod;
            
        } else if (x <= 'Z' && x >= 'A') {  // if the character is uppercase it goes through this 'else if' statment
            
            x = x + mod;
            
        }
        if (x == 91) {                      // This segment checks if z or Z is inputted then a or A respectively is the output. 
            
            x = 65;
        
        } else if (x == 123) {
            
            x = 97;
        
        }
        
    c[i] = x;                               // converts the number back to ASCII
    
    printf("%c", c[i]);                     // Then prints out the result
    
    }
    
    printf("\n");                           // I couldn't include this in the loop because each letter would print on a different line.
    
    return 0;

}
