
/*
 * Use the sizeof() operator to examine memory use 
 * of the pointer type
 */

#include <stdio.h>

int main( void ) {

    long double *testDoublePtr;

    printf("Long Double pointer size is %ld bytes\n",sizeof(testDoublePtr));

    return 0;
}
