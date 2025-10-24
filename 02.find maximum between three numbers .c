 #include<stdio.h>> 
      int main(){ 
    int a, b, c; 
    printf("Enter first number  a : "); 
    scanf("%d",&a); 
     printf("Enter second number b : "); 
    scanf("%d",&b); 
     printf("Enter third number  c : "); 
    scanf("%d",&c); 
    if (a>=b && a>=c){ 
            printf("Maximum = %d\n",a); 
            } 
   else if(b>=a && b>=c){ 
 
        printf("Maximum = %d\n",b); 
            } 
    else { 
        printf("Maximum = %d\n",c); 
                } 
    return 0; 
    } 
