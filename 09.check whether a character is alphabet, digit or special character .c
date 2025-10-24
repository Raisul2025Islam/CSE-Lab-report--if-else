 #include<stdio.h> 
int main(){ 
    char ch; 
    printf("Enter a Character :  "); 
    scanf("%c",&ch); 
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){ 
        printf("%c Character is Alphabet. ",ch); 
    } 
    else if(ch>='0' && ch<='9'){ 
        printf("%c Character is Digit.",ch); 
    } 
    else{ 
        printf("%c Character is Special Character.",ch); 
    } 
 
return 0; 
}
