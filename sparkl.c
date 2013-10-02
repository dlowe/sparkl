#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v) {
        int min = 1, max = 1;
        for (int i = 1; i < c; ++i) {
                if (strtof(v[i], 0) < strtof(v[min], 0)) {
                        min = i;
                }
                if (strtof(v[i], 0) > strtof(v[max], 0)) {
                        max = i;
                }
        }
        for (int i = 1; i < c; ++i) {
                int x = ((strtof(v[i], 0) - strtof(v[min], 0)) / ((strtof(v[max], 0) - strtof(v[min], 0)) / 8));
                printf("%c%c%c%.*s", 226, 150, 129 + x, i+1 == c, "\n");
        }
}
