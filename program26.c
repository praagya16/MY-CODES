#include <stdio.h> 
 void main() 
{ 
    int num1, num2; 
    float result=0; 
    char ch;    
    printf("Enter first number: "); 
    scanf("%d",&num1); 
    printf("Enter second number: "); 
    scanf("%d",&num2); 
    printf("Choose operation to perform (+,-,*,/,%): "); 
    scanf(" %c",&ch); 
    switch(ch)     
    { 
        case '+': 
            result=num1+num2; 
            break; 
              
        case '-': 
            result=num1-num2; 
            break; 
          
        case '*': 
            result=num1*num2; 
            break; 
              
        case '/': 
            result=(float)num1/num2; 
            break; 
              
        case '%': 
            result=num1%num2; 
            break; 
 
        default: 
            printf("Wrong operator!.\n"); 
    } 
  
    printf("Result: %d %c %d = %f\n",num1,ch,num2,result); 
}