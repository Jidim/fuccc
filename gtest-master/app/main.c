#include <stdio.h>
#include "square.h"
#include "myfunc.h"

int main()
{
    printf("Hello World!\nВведите коэффиценты A, B, C\n");
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    square(a, b, c);
    myfunc(2);
    return 0;
}
