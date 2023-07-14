#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    
    int digit1 = n / 10000;
    int digit2 = (n / 1000) % 10;
    int digit3 = (n / 100) % 10;
    int digit4 = (n / 10) % 10;
    int digit5 = n % 10;
    
    printf("%d", digit1 + digit2 + digit3 + digit4 + digit5);
    return 0;
}
