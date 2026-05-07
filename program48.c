# include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive integer\n");
        return 1;
    }

    while(n>0){
        printf("Step %d: %d\n", count+1, n);
        n=n/2;
        count++;
    }
    printf("Total steps taken: %d\n", count);
    return 0;
}