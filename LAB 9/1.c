
#include<stdio.h>
int operations(int *, int *, int *, int *, int*, float *, int *);
int main()
{
	int x,y;
	int add,sub,multiplication,rem;
	float division;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	operations(&x, &y, &add, &sub, &multiplication, &division, &rem);
	printf("Addition :%d\n",add);
	printf("Subtraction :%d\n",sub);
	printf("Division :%0.2f\n",division);
	printf("Multiplication :%d\n",multiplication);
	printf("Remainder :%d\n",rem);
	return 0;
}
int operations(int *x, int *y, int *add, int *sub, int *multiplication, float *division, int *rem)
{
	*add=*x+*y;
	*sub=*x-*y;
	*multiplication=*x**y;
	*division=(float)(*x)/(*y);
	*rem=(*x)%(*y);
	return 0;
}
