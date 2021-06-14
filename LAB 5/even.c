#include<stdio.h>

int main()
{
    int m,n,rem,i;
    printf(" Give the range of m : \n");
    scanf("%d",&m);
    printf("Give the range of n : \n");
    scanf("%d",&n);
    printf("\n The Even numbers between %d and %d are ",m,n);

           for(i=m; i<=n; ++i)
            {
                rem = i % 2;
                if(rem == 0)
                printf("\n  %d",i);
            }

    return 0;
}
