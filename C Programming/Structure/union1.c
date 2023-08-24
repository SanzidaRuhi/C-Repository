#include<stdio.h>
/*struct test
{
    char c;
    int a;
    float b;
    //memory allacoted space for a, b & c is (1+4+4)=9
};
union test
{
    char c;
    int a;
    float b;
    //memory allacoted space for a, b & c is (1,4,4)=4 as 4 is the largest memory allacated place
};*/
union test1
{
    int x, y;//size 4 bytes each
};
union test2
{
    char ch;//size 1 byte
    int x;//size 4 byte
};
union test3
{
    char name[10];//size 10 byte
    /*typedef float fl;//typedef gives the datatype another name
    fl d;//size 4 byte*/
    float d;
};
union test4
{
    char name[16];//size 10 byte
    float d;//size 4 byte
};
struct test5
{
    int x, y;
    char ch;
    float f;
    double d;
};
int main()
{
    union test1 t1;
    union test2 t2;
    union test3 t3;
    union test4 t4;
    struct test5 t5;
    t1.x=10;
    printf("t1.x= %d\n",t1.x);
    printf("t1.y= %d\n",t1.y);
    t1.y=20;
    printf("t1.x= %d\n",t1.x);
    printf("t1.y= %d\n",t1.y);
    printf("size of test1: %lu bytes\n",sizeof(t1));
    printf("size of test2: %lu bytes\n",sizeof(t2));
    printf("size of test3: %lu bytes\n",sizeof(t3));
    printf("size of test4: %lu bytes\n",sizeof(t4));
    printf("size of test5: %lu bytes\n",sizeof(t5));
    //struct and union shows the size in a multiple of 4 and 8
    return 0;
}
