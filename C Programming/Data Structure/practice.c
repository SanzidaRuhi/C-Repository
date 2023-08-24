#include<stdio.h>
#define max 3
int stack[max], top=-1;
int push(int a)
{
    if(top==max)
    {
        printf("\noverflow");
    }
    else
    {
        int a;
        scanf("%d",&a);
        top=top+1;
        stack[top]=a;
    }
}
int
int fibo(int n)
{
    if(n>2){
    return (fibo(n-1)+fibo(n-2));}
    else if(n==1||n==2){
        return 1;
    }
    else{return 0;}
}
int main()
{
    int n;
    scanf("%d",&n);
    //scanf("%d",&sum);
    for(int i=0; i<=n; i++){
    printf("%d+",fibo(i));}
    return 0;
}
