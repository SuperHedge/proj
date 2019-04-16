#include <stdio.h>
#include <string.h>

int () {
    char* ciphertext = "qwertyuiopasdfghjklzxcvbnm";    // cipher lookup

    char input[500];                                    // input buffer
    printf("Enter text: ");
    fgets(input, sizeof(input), stdin);                 // safe input from user
    input[strlen(input) - 1] = 0;                       // remove the \n (newline)
    int count = strlen(input);                          // get the string length

    char output[count];                                 // output string
    for(int i = 0; i < count; i++) {                    // loop through characters in input
        int index = ((int) input[i]) - 97;              // get the index in the cipher by subtracting 'a' (97) from the current character
        if(index < 0) {
            output[i] = ' ';                            // if index < 0, put a space to account for spaces
        }
        else {
            output[i] = ciphertext[index];              // else, assign the output[i] to the ciphertext[index]
        }
    }
    output[count] = 0;                                  // null-terminate the string

    printf("output: %s\n", output);                     // output the result
}

int capital() {
    char* ciphertext = "QWERTYUIOPASDFGHJKLZXCVBNM";    // cipher lookup                          
                                                        
    char output[count];                                 // output string
    for(int i = 0; i < count; i++) {                    // loop through characters in input
        int index = ((int) input[i]) - 65;              // get the index in the cipher by subtracting 'a' (97) from the current character
        if(index < 0) {
            output[i] = ' ';                            // if index < 0, put a space to account for spaces
        }
        else {
            output[i] = ciphertext[index];              // else, assign the output[i] to the ciphertext[index]
        }
    }
    output[count] = 0;                                  // null-terminate the string

    printf("output: %s\n", output);                     // output the result
}