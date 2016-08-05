#include <stdio.h>
#include <stdlib.h>
#include "MathFunctions.h"
#include "config.h"
int main(int argc, char *argv[])
{
    if (argc < 3){
	printf("%s version %d.%d\n",argv[0],Demo_VERSION_MAJOR,Demo_VERSION_MINOR);
        printf("Usage: %s base exponent \n", argv[0]);
        return 1;
    }
    double base = atof(argv[1]);
    int exponent = atoi(argv[2]);
    double result = power(base, exponent);
    printf("%g ^ %d is %g\n", base, exponent, result);
    return 0;
}
