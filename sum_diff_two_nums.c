#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, y;
    float i, j;
    
    scanf("%d %d", &x, &y);
    scanf("%f %f", &i, &j);
    
    printf("%d %d\n", x + y, x-y);
    printf("%0.1f %0.1f\n", i + j, i - j);
    
    return 0;
}
