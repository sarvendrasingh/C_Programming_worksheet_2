#include<stdio.h>
int main()
    {
        int a = 10;
    	int b = 30;
    	float c;
    	c = a % b++ + b / a--;
    	printf("%f", c--);
        return 0;
    }
