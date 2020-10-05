#include<stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    area=length*breadth;
    perimeter=2*(length+breadth);
    printf("\n\nArea is %f", area);
    printf("\nperimeter is %f\n\n\n", perimeter);
    return 0;
}
