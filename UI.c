#include <stdio.h>
#include <string.h>

char RCC (char v[]);
char RCD (char v[]);
char SC (char v[]);

int main () {
    
    char q, k[1024];
    
    printf("Warning only use lowercase for substituion cipher \nEnter message : ");
    gets(k);                                             // gets allows whitespace to be entered. Ignore the warning when using code
    
    printf("\nEnter a for rotation cipher \n\nEnter b for rotation decipher \n\nEnter c for substitution cipher \n\n");
    
    do {
        scanf("%c", &q);                                // do while loop is to ensure the right letter is inputted
    }while (q != 'a' && q != 'b' && q != 'c');
    
    if (q == 'a') {
        RCC(k);
        
    } else if (q == 'b') {
        RCD(k);
        
    } else if (q == 'c') {
        SC(k);
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
    
    for (int rot = 0; rot < 25; rot++) {        // this loop cycles through every option possible and prints it
        
        for (i = 0; v[i] != '\0'; i++) {        // same as cipher with some changes
    
            x = v[i];
        
            if (x <= 'z' && x >= 'a') {         
            
                x = x + 1;                      //plus one to cycle through every possiblity, x++ wasn't working
            
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

char SC (char v[]) {
    
    char* text = "qwertyuiopasdfghjklzxcvbnm";

    int c = strlen(v);
    
    char k[c];

    for(int i = 0; i < c; i++) {        // cycles through each character

        int j = ((int) v[i]) - 'a';     // get the index in the cipher by subtracting 'a' from the current character

        if(j < 0) {
            
            k[i] = ' ';                 // compensates for white space

        } else {
            
            k[i] = text[j];             // assign k to text

        }
    }
    
    k[c] = 0;                           // terminates the string

    printf("Ciphered text is : %s\n", k);
}
