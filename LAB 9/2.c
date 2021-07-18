#include<stdio.h>
int swapptr(int *, int *);
int main()
{
	int a,b;
	printf("Enter two numbers \n");
	scanf("%d %d",&a,&b);
	printf("Before Swapping\n");
	printf("a :%d b :%d\n",a,b);
	swapptr(&a, &b);
	printf("After Swapping\n");
	printf("a :%d b :%d",a,b);
}
int swapptr(int *a1, int *b1)
{
	int temp;
	temp=*a1;
	*a1=*b1;
	*b1=temp;

}
