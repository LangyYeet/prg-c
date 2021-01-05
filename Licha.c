#include <stdio.h>  
   
int main() {  
    int i; 
    printf("Lichá čísla od 1 do 99\n");  

    for(i = 1; i <= 99; i++) {  
        if(i%2 == 1) { 
            printf("%d ", i);  
        }  
    }  
   
    return 0;  
} 
