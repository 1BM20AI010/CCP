#include<stdio.h>
void main()
{
    char str1[20],str2[20];
    int i,len=0;
    printf("enter the string\n");
    scanf("%s",str1);
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
        len=i;
    }
    str2[i]='\0';
    printf("the copied string is %s\n",str2);
    printf("the length of string is=%d\n",len+1);
}
