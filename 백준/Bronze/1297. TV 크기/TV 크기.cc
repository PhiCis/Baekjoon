#include<stdio.h>
#include<math.h>
double a, b, c;
int main()
{
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%d %d", (int)(a*b/sqrt(b*b+c*c)), (int)(a*c/sqrt(b*b+c*c)));
}