#include<stdio.h>
void main()
{
int num,digit;
printf("\n Enter any number:");
scanf(" %d", &num);
digit = num%10;

printf("The digit at ones place of %d is %d", num,digit);

}
