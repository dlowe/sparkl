float f(char *s) {
        return strtof(s, 0);
}
main(int c, char **v) {
        int n, x, i;
        for (i = c - (n=x=1); i; --i) {
                if (f(v[i]) < f(v[n]))
                        n = i;
                if (f(v[i]) > f(v[x]))
                        x = i;
        }
        for (i++; i < c; ++i) {
                printf("\xe2\x96%c%.*s", 129 + (int)((f(v[i]) - f(v[n])) / ((f(v[x]) - f(v[n])) / 8)), i+1 == c, "\n");
        }
}
