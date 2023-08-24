#include <stdio.h>
int main()
{
    int c[4];
    int i;
    for(i=0;i<4;++i)
    {
        printf("Address of c[%d]=%d\n",i,&c[i]);
    }
    return 0;
}
