#include<stdio.h>
 int main()
    {
    	int a = 23, b = 12, c = 10, d = 15;
    	c = a = b;
    	printf("%d %d %d %d", a = b, b = c, c = d, d);
        return 0;
    }
