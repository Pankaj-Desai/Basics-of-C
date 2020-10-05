#include<stdio.h>
int main()
{
    int num1=17, num2=5, sum, sub, mul, mod;
    float div;
    printf("num1=17\nnum2=5\n\n\n");
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    div=(float)num1/num2;
    mod=num1%num2;
    printf("sum=%d\nsub=%d\nmul=%d\ndiv=%f\nmod=%d", sum, sub, mul, div, mod);
    return 0;
}
