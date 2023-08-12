#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000] = {0};
    int i, freq_arr[10] = {0}, len = 0;
    
    scanf("%s", s);
    
    len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            freq_arr[s[i] - '0']++;
        }
    }
    
     for (i = 0; i < 10; i++) {
        printf("%d ", freq_arr[i]);
    }
    return 0;
}

