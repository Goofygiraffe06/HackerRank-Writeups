#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int and_max = 0;
    int or_max = 0;
    int xor_max = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int and_result = a & b;
            int or_result = a | b;
            int xor_result = a ^ b;

            if ((a & b) < k && (a & b) > and_max) {
                and_max = a & b;
            }

            if ((a | b) < k && (a | b) > or_max) {
                or_max = a | b;
            }

            if ((a ^ b) < k && (a ^ b) > xor_max) {
                xor_max = a ^ b;
            }
        }
    }

    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}


int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

