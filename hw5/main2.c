#include <stdio.h>

int main()
{
    double pi=4.0;
    long calcpi=1;
    int x;
    float y=1.0;
    
    for (x=1; x<=1000000 && (calcpi>3141594 || calcpi<3141590) ; x++)
    {
        pi = pi-y*4.0/(2*x+1);
        y = y*(-1);
        calcpi = (long)(pi*1000000);
    }
    
    printf("x=%d \tvalue=%7.5f \n",x,pi);

    return 0;
}
