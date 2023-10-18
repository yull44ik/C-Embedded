#include <stdio.h>
#include <math.h>

int main()
{
    float z1, z2, b;
    z1, z2=0;

    printf("Enter b: ");
    scanf("%f", &b);
    if(b >= 2)
    {
        z2 = 1/ (sqrt(b+2));
        printf(" z2 = %f", z2);
        z1 = (sqrt(2*b + 2 * (sqrt((b*b)-4))))/ ((sqrt((b*b)-4))+b+2);
        printf(" z1 = %f", z1);
    }
    else
    {
        printf("no value");
    }
    return 0;
}
