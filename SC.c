#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printRandoms(int L, int U) {
        
        int R = (rand() % (U - L + 1)) + L; 
        
        printf("%d\n", R); 
} 

int main() {
    
    char x[1024];
    int A;
    
    printf("Enter : ");
    gets(x);
    
    for (int i = 0; x[i] != '\0'; i++) {
        
        A = x[i];
        
        if (A > 'A' && A < 'Z') {
            
            int L = 65, U = 90; 
 
            srand(time(0));
  
            printRandoms(L, U);
            
        }
        
        if (A > 'a' && A < 'z') {
            
            int L = 97, U = 122; 
 
            srand(time(0));
  
            printRandoms(L, U);
            
        }
        
        x[i] = A;
       
       printf("%c", x[i]);
        
    }
    
    printf("\n");

    return 0;
    
}