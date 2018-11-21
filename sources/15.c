#include<stdio.h> 
int main()
    {
        int i = 1, j = 1, k = 1, l;
        l = ++i && j++ && ++k;
    	printf("%d %d %d %d", i, j, k, l);
    	return 0;
    }
