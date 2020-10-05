//1km = 1000m
//1m = 100cm
#include<stdio.h>
int main()
{
    float len_cm, len_m, len_km;
    printf("Enter the length in centimeters: ");
    scanf("%f", &len_cm);
    len_m=len_cm/100;
    len_km=len_m/1000;
    printf("\n\nlength in meters will be: %f", len_m);
    printf("\nlength in kilo-meters will be: %f\n\n\n", len_km);
    return 0;
}
