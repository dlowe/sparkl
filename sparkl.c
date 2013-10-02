main(c,v)char**v;{
        char n,x,i;
        for (i = c - (n=x=1); i; --i)
                f(i) < f(n) && (n = i),
                f(i) > f(x) && (x = i);
        for (i++; i < c;)
                printf("\xe2\x96%c%.*s", 129 + (int)(8 * (f(i) - f(n)) / (f(x) - f(n))), i++ == c, "\n");
}
