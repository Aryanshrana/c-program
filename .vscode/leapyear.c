#include<stdio.h>
int main() 
{
    int year;
    printf("enter a year : ");
    scanf("%d",&year);

    if(year%4 == 0 )
    {
        if(year%100 != 0 && year%400 == 0){
            if(year%3200 != 0){
                printf("leap year");
            }
            else{
                printf("not leap year");
            }
        }
    }
    else{
        printf("not a leap year");
    }
    return 0;

}