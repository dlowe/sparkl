main(c,v)char**v;{
    char n=1,x=n,i=c-x;
    for (;i;i--) _(i) < _(n) ? n = i : _(i) > _(x) ? x = i : i;
    while (++i < c) printf("\xe2\x96%c", 129 + (**v = 8 * (_(i) - _(n)) / (_(x) - _(n))));
}
