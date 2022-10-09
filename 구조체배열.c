#include<stdio.h>

struct student
{
    char no[10];
    char name[20];
    double math;
    double english;
    double total;
};

int main(void)
{
    // struct student stu1={"20101323","Park",90,80,0};
    // struct student stu2={"20101324","Kim",95,85,0};
    // struct student stu3={"20101325","Lee",100,90,0};

    // stu1.total=stu1.math+stu1.english;
    // printf("학번:%s, 이름:%s \n",stu1.no,stu1.name);
    // printf("총점:%lf \n",stu1.total);

    // printf("\n");
    // stu2.total=stu2.math+stu2.english;
    // printf("학번:%s, 이름:%s \n",stu2.no,stu2.name);
    // printf("총점:%lf \n",stu2.total);

    // printf("\n");
    // stu3.total=stu3.math+stu3.english;
    // printf("학번:%s, 이름:%s \n",stu3.no,stu3.name);
    // printf("총점:%lf \n",stu3.total);

    int i=0;
    struct student stu[3]={
        {"20101323","park",80,80,0},
        {"20101324","kim",95,85,0},
        {"20101325","lee",100,90,0},
    };

    for(i=0;i<3;i++)
    {
        stu[i].total=stu[i].math+stu[i].english;
        printf("학번:%s, 이름:%s \n",stu[i].no,stu[i].name);
        printf("총점:%lf \n",stu[i].total);
        printf("\n");
    }

    return 0;
}
// int main_2(void)
// {
//     int si_1=5;
//     double si_2=342.3415;
// }