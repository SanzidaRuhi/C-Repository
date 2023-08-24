//program from p_26.2
#include <stdio.h>
void func1();
void func2();
int main()
{
    printf("1 ");
    func1();
    func2();
    return 0;
}
void func1()
{
    printf("2 ");
}
void func2()
{
    printf("3");
}
