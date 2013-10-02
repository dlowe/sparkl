float f(char *s) {
        return strtof(s, 0);
}
main(int c, char **v) {
        int n = 1, x = 1, i;
        for (i = 2; i < c; ++i) {
                if (f(v[i]) < f(v[n]))
                        n = i;
                if (f(v[i]) > f(v[x]))
                        x = i;
        }
        for (i = 1; i < c; ++i)
                printf("\xe2\x96%c%.*s", 129 + (int)((f(v[i]) - f(v[n])) / ((f(v[x]) - f(v[n])) / 8)), i+1 == c, "\n");
}
