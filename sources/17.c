#include<stdio.h>
int main()
    {
        int i = 20, j = 20, k, l;
    	k = i++ + j;
    	l = i++ + ++j;
    	printf("%d %d", l, k);
    	return 0;
    }
