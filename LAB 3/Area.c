
#include <stdio.h>
#include <math.h>
double areaoftriangle(double, double, double);

int main()
{
  double a, b, c, area;

  printf("Enter the lengths of sides of a triangle\n");

  scanf("%lf%lf%lf", &a, &b, &c);

  area = areaoftriangle(a, b, c);

  printf("Area of the triangle = %.2lf\n", area);

  return 0;
}

double areaoftriangle(double a, double b, double c)
{
  double s, area;

  s = (a+b+c)/2;

  area = sqrt(s*(s-a)*(s-b)*(s-c));

  return area;
}
