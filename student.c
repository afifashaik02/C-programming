#include<stdio.h>
#include<conio.h>
struct student
{
    char name[20];
    int rollno;
    int marks;
    char city[20];
    char dream[20];
};
void main()
{
    int i;
    struct student s[10];
    for(i=0;i<10;i++)
    {
        printf("\enter student %d\n",i+1);
        printf("enter the name:");
        scanf("%s",s[i].name);
        printf("enter the rollno:");
        scanf("%d",&s[i].rollno);
        printf("enter the marks:");
        scanf("%d",&s[i].marks);
        printf("enter the city:");
        scanf("%s",s[i].city);
        printf("enter the dream:");
        scanf("%s",s[i].dream);
    }
    printf("\n===5 student %d====\n");
    for(i=0;i<10;i++)
       {
            printf("\n===student %d===\n",i+1);
            printf("name:%s\n",s[i].name);
            printf("rollno:%d\n",s[i].rollno);
            printf("marks:%d\n",s[i].marks);
            printf("city:%s\n",s[i].city);
            printf("dream%s\n",s[i].dream);
        }
        getch();
    }
