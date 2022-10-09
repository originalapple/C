#include<stdio.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1={20,30};
    printf("구조체 변수 p1의 주소 : %x \n",&p1);//구조체 변수의 주소는 구조체 멤버 첫번째 주소랑 같다.
    printf("멤버 변수 p1.x의 주소 : %x \n",&p1.x);// 구조체 멤버의 주소는 시작 부분이 같다
    printf("멤버 변수 p1.y의 주소 : %x \n",&p1.y);// 메모리를 아낄 수 있는 구조다

    return 0;
}
