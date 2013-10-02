#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v) {
        int min = 1, max = 1, i;
        for (i = 1; i < c; ++i) {
                if (strtof(v[i], 0) < strtof(v[min], 0)) {
                        min = i;
                }
                if (strtof(v[i], 0) > strtof(v[max], 0)) {
                        max = i;
                }
        }
        for (i = 1; i < c; ++i) {
                printf("%c%c%c%.*s", 226, 150, 129 + (int)((strtof(v[i], 0) - strtof(v[min], 0)) / ((strtof(v[max], 0) - strtof(v[min], 0)) / 8)), i+1 == c, "\n");
        }
}
