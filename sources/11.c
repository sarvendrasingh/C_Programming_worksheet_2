#include<stdio.h>
int main()
    {
        int c = 10, d = 20, e = 30;
        d = !e;
    	e = ~d;
    	printf("%d %d", d, e);
    }
