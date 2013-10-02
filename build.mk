prog: prog.c
	${CC} -include stdio.h -include stdlib.h -D'_(x)=strtof(b[x],0)' $< -o $@
