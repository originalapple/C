#include<stdio.h>

struct student
{
    char no[10];
    char name[20];
    long total;
};

int main(void)
{
    struct student stu={"20101323","Park",160};
    struct student *p=NULL;

    p=&stu;
    printf("%s %s %d \n",stu.no,stu.name,stu.total);
    printf("%s %s %d \n",(*p).no,(*p).name,(*p).total);//(*p)는 p가 가르키는 구조체 변수를 의미
    printf("%s %s %d \n",p->no,p->name,p->total);//->연산자는 구조체포인터변수에서만 사용한다. 

    return 0;
}
