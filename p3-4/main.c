#include <stdio.h>
int main()
{
    float r,a,cf,dm,PI=3.14;
    printf("Enter the radius");
    scanf("%f",&r);
    printf("Diameter of a circle = %.2f\n",2*r);
    printf("Circumference of a circle =%.2f\n",2*PI*r);
    printf("Area of a circle = %.2f\n",PI*r*r);
}
