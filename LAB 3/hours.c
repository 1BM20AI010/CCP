#include<stdio.h>
int time(int a,int b);
void main()
{
    int a,b;
    printf("Enter the hours ");
    scanf("%d",&a);
    printf("Enter the minutes ");
    scanf("%d",&b);
    time(a,b);
}

int time(int a,int b)
{
    int hours,totmin,minutes;
    totmin=a*60+b;
    hours=totmin/60;
    minutes=totmin%60;
    printf("The converted time is %d:%d",hours,minutes);
    return(0);
}
