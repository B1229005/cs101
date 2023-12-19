#include <stdio.h>

int main()
{
    int i =12345;
    int result;
    int x=i%10;
    int y=i/10%10;
    int z=i/100%10;
    int j=i/1000%10;
    int k=i/10000;
    result=k*10000+x*1000+z*100+y*10+j;
    printf("%d",result);

    return 0;
}
