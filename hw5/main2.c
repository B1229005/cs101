#include <stdio.h>

int main()
{
    double pi=4.0;
    long realpi=314159;
    long calcpi=1;
    int i;
    float x=1.0;
    
    for (i=1; i<=300000 && realpi!=calcpi ; i++)
    {
        pi = pi-x*4.0/(2*i+1);
        x = x*(-1);
        calcpi = (long)(pi*100000);
    }
    
    printf("times=%d",i);

    return 0;
}
