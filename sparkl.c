main(c,v)char**v;{
    char n=1,x=n,i=c-x;
    for (;i;i--) f(i) < f(n) ? n = i : f(i) > f(x) ? x = i : i;
    while (++i < c) printf("\xe2\x96%c", 129 + (int)(8 * (f(i) - f(n)) / (f(x) - f(n))));
}
