#include <stdio.h>
#include <string.h>

int main() {
    
    char* ciphertext = "qwertyuiopasdfghjklzxcvbnm";
    char* Uciphertext = "QWERTYUIOPASDFGHJKLZXCVBNM";
    
    char ch[1024];  
    
    printf("Enter text: ");
    fgets(ch, sizeof(ch), stdin);                            
    ch[strlen(ch) - 1] = 0;                       
    int count = strlen(ch);
    
    for (int i = 0; ch[i] != '\0'; i++) {
        
        int x = ch[i];
        
        if (x > 65 && x < 90) {
            
            char output[i];                                 
                                
                int index = ((int) ch[i]) - 65;             
                if(index < 0) {
                    output[i] = ' ';                            
                }
                else {
                     output[i] = Uciphertext[index];              
               }

            output[i] = 0; 
            
            printf("%s", output);
        }
        
        
        else if (x > 97 && x < 122) {
            
            char output[i];         

                int index = ((int) ch[i]) - 97;   
        
                if (index < 0) {
                    
                    output[i] = ' ';        
            
                } else {
                     
                    output[i] = ciphertext[index];        
                }

    
            output[i] = 0;
            
            printf("%s", output);
        }
        

    }
    
    printf("\n");                                   
    
}