#include<stdio.h>
#include<math.h>
void main()
{
    float d11,d12;
    float d21,d22;
    float dist;
    printf("Enter coordinates of 1st point:");
    scanf("%f%f",&d11,&d12);
    printf("Enter coordinates of 2nd point:");
    scanf("%f%f",&d21,&d22);
    dist = sqrt(((d11-d21)*(d11-d21)+(d12-d22)*(d12-d22)));
    printf("Distance btw two points is:%f",dist);
}

/*
//OUTPUT
Enter coordinates of 1st point:4.2 5.2
Enter coordinates of 2nd point:6.3 5
Distance btw two points is:2.109503
*/