#include <stdio.h>

float sum (float a, float b)
{
    float answer;
    answer = a + b;
    return answer;
}

int main () 
{
    float y = 2, x = 5;
    float z = sum(x, y); // calling our new function

    printf ("The sum of %f and %f is %.2f\n", x, y, z);
}