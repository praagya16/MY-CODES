# include<stdio.h>
int main(){
    int a,b,c;
    float AREA;
 printf("Enter the first slide\n");
 scanf("%d",&a);
 printf("Enter the second slide\n");
    scanf("%d",&b);
    printf("Enter the third slide\n");
    scanf("%d",&c);
    if(a+b>c && b+c>a && a+c>b){
        AREA=(a+b+c)/2;
        printf("Area of the triangle:%f\n",AREA);
    }
    else{
        printf("DEFAULT\n");
    }
    return 0;
}