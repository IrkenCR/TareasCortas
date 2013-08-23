#include <stdio.h>

main(){
        int x=0,y[11],*z=&y;
        *(z++)=0x4F;
        *(z++)=y[x++]+ 0x1D;
        *(z++)=y[x++]-0x0B;
        *(z++)=y[x++]-0x41;
        *(z++)=y[x++]+0x4B;
        *(z++)=y[x++]-0x4B;
        *(z++)=y[x++]+0x41;
	*(z++)=y[x++]+0x12;
        *(z++)=y[x++]-0x0E;
	*(z++)=y[x++]-0x26;
	*(z++)=y[x]-0x3F;
        x=*(--z);

while(y[x]!=NULL )
	putchar(y[x++]);

	printf("\n");
}


