float f(char *s) {
        return strtof(s, 0);
}
int main(int c, char **v) {
        int n = 1, x = 1, i;
        for (i = 1; i < c; ++i) {
                if (f(v[i]) < f(v[n]))
                        n = i;
                if (f(v[i]) > f(v[x]))
                        x = i;
        }
        for (i = 1; i < c; ++i)
                printf("%c%c%c%.*s", 226, 150, 129 + (int)((f(v[i]) - f(v[n])) / ((f(v[x]) - f(v[n])) / 8)), i+1 == c, "\n");
}
