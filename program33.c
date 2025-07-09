# include<stdio.h>
int main(){
    int num;
    printf("Enter a number(1-12):\n");
    scanf("%d",&num);
    if(num==1){
        printf("1-JANUARY\n");
    }
    else if(num==2){
        printf("2-FEBRUARY\n");
    }
    else if(num==3){
        printf("3-MARCH\n");
    }
   else  if(num==4){
        printf("4-APRIL\n");
    }
    else if(num==5){
        printf("5-MAY\n");
    }
    else if(num==6){
        printf("6-JUNE\n");
    }
    else if(num==7){
        printf("7-JULY\n");
    }
    else if(num==8){
        printf("8-AUGUST\n");
    }
    else if(num==9){
        printf("9-SEPTEMBER\n");
    }
    else if(num==10){
        printf("10-OCTOBER\n");
    }
    else if(num==11){
        printf("11-NOVEMBER\n");
    }
    else if(num==12){
        printf("12-DECEMBER\n");
    }
    else{
        printf("DEFAULT\n");
    }
    return 0;
}