#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int printRandoms(int L, int U) {
        
        int R = (rand() % (U - L + 1)) + L; 
        
        printf("%d\n", R); 
} 

int main() {
    
    char ch[1024];
    int x;
    
    printf("Enter : ");
    gets(x);
    
    for (int i = 0; ch[i] != '\0'; i++) {
        
        x = ch[i];
        
        if (x > 'A' && x < 'Z') {
            
            int L = 65, U = 90; 
 
            srand(time(0));
  
            x = printRandoms(L, U);
            
        }else if (x > 'a' && x < 'z') {
            
            int L = 97, U = 122; 
 
            srand(time(0));
  
            x = printRandoms(L, U);
            
        }
        
        ch[i] = x;
        
        printf("%c", ch[i]);
        
    }
    
    printf("\n");

    return 0;
    
}