//Array value print
#include <stdio.h>
void main(void)
{
    int my_array[] = {1,23,17,4,-5,100};
    int *ptr;
    int i;
    ptr = &my_array[0]; /* point our pointer to the first
    element of the array */
    for (i = 0; i < 6; i++)
    {
        printf("my_array[%d] = %d \n",i,my_array[i]); /*<-- A */
    }
    for (i = 0; i < 6; i++)
    {
        printf("ptr + %d = %d\n",i, *(ptr + i)); /*<-- B */
    }
}
