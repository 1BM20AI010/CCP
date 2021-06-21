#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,n,lpos=0,spos=0,temp,large,small;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    large=a[0];
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            spos=i;
        }
        if(a[i]>large)
        {
            large=a[i];
            lpos=i;
        }
    }
    printf("the smallest num=%d and its position is=%d",small,spos+1);
    printf("/n the largest num=%d and its position is=%d",large,lpos+1);
    temp=a[lpos];
    a[lpos]=a[spos];
    a[spos]=temp;
    printf("the new array is");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }

}
