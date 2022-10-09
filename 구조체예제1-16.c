#include<stdio.h>

struct point
{
    int *x;
    int **y;
};

int main(void)
{
    int num1=3;
    struct point p1;

    p1.x=&num1; //포인터 변수는 주소값을 저장한다.
    p1.y=&p1.x; //이중 포인터는 포인터 변수를 저장한다.

    printf("%d %x %d \n",num1,*p1.x,**p1.y);

    return 0;
}
