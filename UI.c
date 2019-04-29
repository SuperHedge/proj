#include <stdio.h>

char RCC (char k[1024]);
char RCD (char c[1024]);


int main () {
    
    char q, v;
    
    printf("Enter a for rotation cipher \nEnter b for rotation decipher \nEnter c for substitution cipher \n");
    
    do {
        scanf("%c", &q);
    }while (q != 'a' && q != 'b' && q != 'c');
    
    if (q == 'a') {
        RCC;
        
    } else if (q == 'b') {
        RCD;
        
    } else if (q == 'c') {
        printf("=P");
    }
    
    return 0;
}

char RCC(char k[1024]) {
                     //declaring some variables
    int y, j, Mod;
    
    printf("Enter Sentence to Cipher: ");
    gets(k);                                //Using gets() allows for white space to be read
    
    printf("Enter Positive Shift : ");
    scanf("%d", &Mod);

    
    printf("Ciphered code is : ");          // this printf goes here eitherwise after each letter printed would have this behind it.
    
    for (j = 0; k[j] != '\0'; j++) {        // this 'for' loop is to cycle through each character given.
    
        y = k[j];                           // convet the character into a number
        
        if (y <= 'z' && y >= 'a') {         // if the character is lowercase it goes through this 'if' statement
            
            y = y + Mod;
            
        } else if (y <= 'Z' && y >= 'A') {  // if the character is uppercase it goes through this 'else if' statment
            
            y = y + Mod;
            
        }
        if (y == 91) {                      // This segment checks if z or Z is inputted then a or A respectively is the output. 
            
            y = 65;                         // Note I used nnumbers here because intially using letters wasn't working
        
        } else if (y == 123) {
            
            y = 97;
        
        }
        
    k[j] = y;                               // converts the number back to ASCII
    
    printf("%c", k[j]);                     // Then prints out the result
    
    }
    
    printf("\n");                           // I couldn't include this in the loop because each letter would print on a different line.
    
    return y;

}

char RCD(char c[1024]) {                   // Basically the same as the cipher, except word changes and the mod is a minus
    
    int x, i, mod;
    
    printf("Enter Sentence to Decipher: ");
    gets(c);
    
    do {
        printf("Enter Shift : ");
        scanf("%d", &mod);
    } while (mod < 26 && mod > 0);
    
    printf("Diphered code is : ");
    
    for (i = 0; c[i] != '\0'; i++) {
    
        x = c[i];
        
        if (x <= 'z' && x >= 'a') {
            
            x = x - mod;
            
        } else if (x <= 'Z' && x >= 'A') {
            
            x = x - mod;
            
        }
        if (x == '@') {
            
            x = 'Z';
        
        } else if (x == '`') {
            
            x = 'z';
        
        }
        
    c[i] = x;
    
    printf("%c", c[i]);
    
    }
    
    printf("\n");
    
    return x;
}