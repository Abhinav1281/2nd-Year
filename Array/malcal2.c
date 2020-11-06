//Abhinav Sinha 1929068
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char *c;
    c=(char *)malloc(10*sizeof(char));
    printf("ENTER STRING:");
    gets(c);
    printf("\nADDRESS:%p",c);
    printf("\nVALUE:%s",c);

    printf("\nENTER NEW STRING:");
    gets(c);
    c=(char *)realloc(c,10*sizeof(char));
    printf("\nNEW ADDRESS:%p",c);
    printf("\nNEW VALUE:%s",c);
}