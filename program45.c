# include<stdio.h>
int main(){
    int n;
 printf("Enter the quiz score:\n");
 scanf("%d",&n);
if(n<3){
    printf("You got a F\n");
}
else if(n>=3 && n<=4){
    printf("You got a D\n");
}
else if(n>=5 && n<=6){
    printf("You got a C\n");
}
else if(n>=7 && n<=8){
    printf("You got a B\n");
}
else if(n>=9 && n<=10){
    printf("You got an A\n");
}
else{
    printf("Invalid score\n");
    return 0; // Exit if the score is not in the valid range
  }
}