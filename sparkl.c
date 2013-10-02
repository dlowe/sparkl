char**V,n,x,i;
float f(s){return strtof(V[s],0);}
main(int c, char **v) {
        for(V=v,i=c-(n=x=1);i;--i)f(i)<f(n)&&(n=i),f(i)>f(x)&&(x=i);
        for (i++; i < c;)
                printf("\xe2\x96%c%.*s", 129 + (int)((f(i) - f(n)) / ((f(x) - f(n)) / 8)), i++ == c, "\n");
}
