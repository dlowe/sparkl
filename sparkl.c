#include <stdio.h>
#include <stdlib.h>

int main(int c, char **v) {
        float min = strtof(v[1], 0);
        float max = strtof(v[1], 0);
        for (int i = 1; i < c; ++i) {
                if (strtof(v[i], 0) < min) {
                        min = strtof(v[i], 0);
                }
                if (strtof(v[i], 0) > max) {
                        max = strtof(v[i], 0);
                }
        }
        for (int i = 1; i < c; ++i) {
                int x = ((strtof(v[i], 0) - min) / ((max - min) / 8));
                printf("%c%c%c", 226, 150, 129 + x);
        }
        printf("\n");
}
