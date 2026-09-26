#include <stdio.h>
int main()
{
    float x, polynomial;
    x = 2.55;
    polynomial = 3 * x * x * x - 5 * x * x + 6;
    printf("The value of the polynomial 3x^3 - 5x^2 + 6 at x = %.2f is: %.2f\n", x, polynomial);
    return 0;
}