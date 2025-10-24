 #include<stdio.h> 
int main(){ 
    int year; 
    printf("Enter a Year:"); 
    scanf("%d",&year); 
 
    if(year%4==0 && year%100!=0 || year%400==0){ 
        printf("%d Year is Leap Year:"); 
    } 
    else{ 
        printf("%d Year is Leap Year:"); 
    } 
return 0; 
}
