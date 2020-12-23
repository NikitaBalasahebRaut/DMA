#include<stdio.h>
#include<stdlib.h>
int main ()
{
    char * pBuffer =(char*) malloc(sizeof(char) * 20);
    /* Do some work */
    return 0; /*Not freeing the allocated memory*/
}