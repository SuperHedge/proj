#include <stdio.h>

int main() {
    
    char ch[1024];
    int x;
    
    printf("Enter : ");
    gets(x);
    
    for (int i = 0; ch[i] != '\0'; i++) {
        
        x = ch[i];
        
        if (x = 97){
	
	       x = 113; }
	
       /* else if (x = 'b'){
	
	       x = 'w'; }
	
        else if (x = 'c'){
	
	       x = 'e'; }
	
        else if (x = 'd'){
	
	       x = 'r'; }
	
        else if (x = 'e'){
	
	       x = 't'; }
	
        else if (x = 'f'){
	
	       x = 'y'; }
	
        if (x = 'g'){
	
	       x = 'u'; }
	
        if (x = 'h'){
	
	       x = 'i'; }
	
        if (x = 'i'){
	
	       x = 'o'; }
	
        if (x = 'j'){
	
	       x = 'p'; }
	
        if (x = 'k'){
	
	       x = 'a'; }
	
        if (x = 'l'){
	
	       x = 's'; }
	
        if (x = 'm'){
	
	       x = 'd'; }
	
        if (x = 'n'){
	
	       x = 'f'; }
	
        if (x = 'o'){
	
	       x = 'g'; }
	   
        if (x = 'p'){
	
	       x = 'h'; }
	
        if (x = 'q'){
	
	       x = 'j'; }
	
        if (x = 'r'){
	
	       x = 'k'; }
	
        if (x = 's'){
	
	       x = 'l'; }
	
        if (x = 't'){
	
	       x = 'z'; }
	
        if (x = 'u'){
	
	       x = 'x'; }
	
        if (x = 'v'){
	
	       x = 'c'; }
	
        if (x = 'w'){
	
	       x = 'v'; }	
	
        if (x = 'x'){
	
	       x = 'b'; }
	
        if (x = 'y'){
	
	       x = 'n'; }
	
        if (x = 'z'){
	
	       x = 'm'; }*/
            
        
        ch[i] = x;
        
        printf("%c", ch[i]);
        
    }
    
    printf("\n");

    return 0;
    
}