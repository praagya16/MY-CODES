# include<stdio.h>
int main(){
    int temp;
    printf("Enter the temperature:\n");
    scanf("%d",&temp);
    if(temp<0){
        printf("Temperature:%d\n",temp);
        printf("FREEZING WEATHER\n");
    }
    else if(0<temp && temp<10){
        printf("Temperature:%d\n",temp);
        printf("VERY COLD WEATHER\n");
    }
    else if(10<temp && temp<20){
        printf("Temperature:%d\n",temp);
        printf("COLD WEATHER\n");
    }
    else if(20<temp && temp<30){
        printf("Temperature:%d\n",temp);
        printf("NORMAL IN TEMPERATURE\n");
    }
    else if(30<temp && temp<40){
        printf("Temperature:%d\n",temp);
        printf("HOT TEMPERATURE\n");
    }
    else if(temp>=40){
        printf("Temperature:%d\n",temp);
        printf("VERY HOT TEMPERATURE\n");
    }
    return 0;
}