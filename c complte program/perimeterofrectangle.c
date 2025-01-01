#include<stdio.h>
void main()
{
    float a,b,perimeter;

    printf("Enter the length of a:");
    scanf("%f",&a);
    
    printf("Enter the length of b:");
    scanf("%f",&b);

    perimeter=2*(a+b);

    printf("The perimeter of rectangle %.2f\n",perimeter);
}