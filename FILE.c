#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("data.txt","w");
    if (fp==NULL)
    {
        printf("error");
    }
    fprintf(fp,"welcome to c program");
    fclose(fp);
    fp=NULL;
    fp=fopen("data.txt","r");
    while((ch=fgetc(fp))!=EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    fp=NULL;
    fp=fopen("data.txt","a");
    if(fp==NULL)
    {
        printf("error");
    }
    fprintf(fp,"my trainer is saravanan sir,he teaches very well and clarifies all the doubts");
    fclose(fp);
    fp=NULL;
    return 0;
}