#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(argc,char*argv[])
{
    int m1,m2,m3,m4,m5,total;
    float average;
    char name[30];

    if(argc ! = 7)
    {
        printf("usage: ./a.out Name M1 M2 M3 M4 M5\n");
        return 0;
    }

    strcpy(name,aargv[1]);

    m1 = atoi(argv[2]);
    m2 = atoi(argv[3]);
    m3 = atoi(argv[4]);
    m4 = atoi(argv[5]);
    m5 = atoi(argv[6]);

    total = m1 + m2  + m3 + m4 + m5;
    average = total /5.0;

    printf("\n------STUDENT REPORT------\n");
    printf("Student name : %s\n", name);
    printf("Mark 1       : %d\n", m1);
    printf("Mark 2       : %d\n", m2);
    printf("mark 3       : %d\n", m3);
    printf("mark 4       : %d\n", m4);
    printf("mark 5       : %d\n", m5);

    printf("Total        : %d\n", total);
    printf("Average      : %d\n", average);

    if (m1 < 35 || m2 < 35 || m3 < 35 || m4 < 35 || m4 < 35 || m5 < 35)
    {
        printf("Result   : FAIL\n");
    }
    else
    {
    if(average >= 90)
        printf("Grade    : A+\n");
    else if(average >= 80)
        printf("Grade    : A\n");
    else if(average >= 70)
        printf("Grade    : B\n");
    else if(average >= 60)
        printf("Grade    : C\n");
    else
        printf("Grade    : D\n");
    }
    return 0;

}