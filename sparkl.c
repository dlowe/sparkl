char **V, n, x, i;
float f(s) {
        return strtof(V[s], 0);
}
main(int c, char **v) {
        V=v;
        for (i = c - (n=x=1); i; --i) {
                if (f(i) < f(n))
                        n = i;
                if (f(i) > f(x))
                        x = i;
        }
        for (i++; i < c; ++i)
                printf("\xe2\x96%c%.*s", 129 + (int)((f(i) - f(n)) / ((f(x) - f(n)) / 8)), i+1 == c, "\n");
}
