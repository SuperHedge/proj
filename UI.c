#include <stdio.h>

char RCC (char v[]);
char RCD (char v[]);


int main () {
    
    char q, k[1024];
    
    printf("Enter message : ");
    gets(k);
    
    printf("Enter a for rotation cipher \nEnter b for rotation decipher \nEnter c for substitution cipher \n");
    
    do {
        scanf("%c", &q);
    }while (q != 'a' && q != 'b' && q != 'c');
    
    if (q == 'a') {
        RCC(k);
        
    } else if (q == 'b') {
        RCD(k);
        
    } else if (q == 'c') {
        printf("=P \n");
    }
    
    return 0;
}

char RCC(char v[]) {
     
    int y, j, Mod;                          //declaring some variables

    printf("Enter Positive Shift : ");
    scanf("%d", &Mod);
    
    printf("Ciphered code is : ");          // this printf goes here eitherwise after each letter printed would have this behind it.
    
    for (j = 0; v[j] != '\0'; j++) {        // this 'for' loop is to cycle through each character given.
    
        y = v[j];                           // convet the character into a number
        
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
        
    v[j] = y;                               // converts the number back to ASCII
    
    printf("%c", v[j]);                     // Then prints out the result
    
    }
    
    printf("\n");                           // I couldn't include this in the loop because each letter would print on a different line.
    
    return Mod;

}

char RCD(char v[]) {                   // Basically the same as the cipher, except word changes and the mod is a minus
    
    
    int x, i;
    
    
    printf("Diphered code is : ");
    
    for (int rot = 0; rot < 25; rot++) {
        
        for (i = 0; v[i] != '\0'; i++) {
    
            x = v[i];
        
            if (x <= 'z' && x >= 'a') {
            
                x = x + 1;
            
            } else if (x <= 'Z' && x >= 'A') {
            
                x = x + 1;
            
            }
            if (x == 91) {
            
                x = 'A';
        
            } else if (x == '{') {
            
                x = 'a';
        
            }
        
        v[i] = x;
    
        printf("%c", v[i]);
    
        }
    
    printf("\n");
    
    }


    return x;
}