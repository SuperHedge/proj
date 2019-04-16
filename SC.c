#include <stdio.h>
#include <string.h>

int lower() {
    char* ciphertext = "qwertyuiopasdfghjklzxcvbnm";                   
    
    for(int i = 0; i < count; i++) {
        
        int index = ((int) input[i]) - 97;   
        
        if(index < 0) {
            
            output[i] = ' ';             
            
        }
        
        else {
            
            output[i] = ciphertext[index];           
        }
    }
    
    output[count] = 0;                                    
    
}

int upper() {
    char* Uciphertext = "QWERTYUIOPASDFGHJKLZXCVBNM";                
    
    for(int i = 0; i < count; i++) {
        
        int Index = ((int) ch[i]) - 65;   
        
        if (Index < 0) {
            Output[j] = ' ';        
            
        }
        
        else {
            Output[i] = Uciphertext[index];        
        }
    }
    
    output[count] = 0;                                        
    
}

int main() {
    
    char ch[500];  
    
    printf("Enter text: ");
    
    fgets(ch, sizeof(ch), stdin);
    
    ch[strlen(ch) - 1] = 0;       
    
    int count = strlen(ch);                          


    char output[count];
    
    for (i = 0; ch[i] != '\0'; i++) {
        
        
    }
}