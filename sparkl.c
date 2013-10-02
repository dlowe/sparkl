main(c,v)char**v;{
        char n,x,i;
        for (i = c - (n=x=1); i;)
                f(i) < f(n) ? n = i-- : f(i) > f(x) ? x = i-- : i--;
        for (i++;i<c;)
                printf("\xe2\x96%c", 129 + (int)(8 * (f(i++) - f(n)) / (f(x) - f(n))));
}
