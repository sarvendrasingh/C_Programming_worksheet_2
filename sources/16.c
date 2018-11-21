#include<stdio.h>
int main()
    {
        int i = 1, j = 2, k = 3, l = 1;
    	l = i && j++ && ++k;
        printf("%d %d %d %d", i, j, k, l);
        return 0;
    }
