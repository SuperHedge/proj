#include <stdio.h>
#include <stdlib.h>

int main() {
    
    char x[1024];
    int A;
    
    printf("Enter : ");
    gets(x);
    
    for (int i = 0; x[i] != '\0'; i++) {
        
        A = x[i];
        
        A = rand() % 90;
        
        x[i] = A;
       
       printf("%c", x[i]);
       
       printf("%d\n", A);
        
    }
    
    printf("\n");

    return 0;
    
}