#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    float radius,AREA1,length,breadth,AREA2,a,b,c,AREA3,S;
    printf("choose an option\n");
    printf("1:Area of a circle\n");
    printf("2:Area of a rectangle\n");
    printf("3:Area of a triangle\n");
    scanf("%d",&choice);
    if(choice==1)
    {
       printf("Enter the radius of circle:\n");
       scanf("%f",&radius);
       AREA1=3.14*radius*radius;
       printf("AREA OF CIRCLE:%f",AREA1);
    }
    else if(choice==2)
    {
        printf("Enter the length:\n");
        scanf("%f",&length);
        printf("Enter the breadth:\n");
        scanf("%f",&breadth);
        AREA2=length*breadth;
        printf("AREA OF RECTANGLE:%f",AREA2);
    }
    else if(choice==3)
    {
        printf("Enter the 3 sides of triangle:\n");
        scanf("%f%f%f",&a,&b,&c);
        S=(a+b+c)/2;
        AREA3=sqrt(S*(S-a)*(S-b)*(S-c));
        printf("AREA OF TRIANGLE:%f",AREA3);
        return 0;
        
    }
}
