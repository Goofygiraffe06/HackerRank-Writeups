#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int *arr, n, i, sum = 0; // Initialize sum to 0
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {  // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;  // Exit with an error code
    }
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    free(arr);
    return 0;
}

