#include <stdio.h> 
int main(){ 
    int Number; 
    printf("Enter any number: "); 
    scanf("%d", &Number); 
    if((Number % 5 == 0) && (Number % 11 == 0)) 
        { 
        printf("Number is divisible by 5 and 11"); 
        } 
        else 
           { 
           printf("Number is not divisible by 5 and 11"); 
           } 
 return 0; 
 }
