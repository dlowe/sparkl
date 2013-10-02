float f(char *s) {
        return strtof(s, 0);
}
int main(int c, char **v) {
        int min = 1, max = 1, i;
        for (i = 1; i < c; ++i) {
                if (f(v[i]) < f(v[min]))
                        min = i;
                if (f(v[i]) > f(v[max]))
                        max = i;
        }
        for (i = 1; i < c; ++i)
                printf("%c%c%c%.*s", 226, 150, 129 + (int)((f(v[i]) - f(v[min])) / ((f(v[max]) - f(v[min])) / 8)), i+1 == c, "\n");
}
