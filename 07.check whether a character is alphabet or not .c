#include<stdio.h> 
int main(){ 
    char ch; 
    printf("Enter a character : "); 
    scanf("%c",&ch); 
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){ 
        printf("%c is  a  Alphabet:",ch); 
    } 
    else{ 
        printf("%c is not  a  Alphabet r:",ch); 
    } 
return 0; 
}
