#include<stdio.h> 
int main()
    {
        int a = 012, b = 034;
    	int x = 0x12, y = 0x34;
    	int c, d, u, v;
    	c = a && b;
    	d = a || b;
    	u = x && y;
    	v = x || y;
    	printf("%o %o %x %x", c, d, u, v);
    	return 0;
    }
