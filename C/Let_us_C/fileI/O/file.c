#include <stdio.h>
#include<stdlib.h>
void main(){
    FILE *fp=NULL;
    char str[30];
    fp=fopen("bcd.txt","a");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }

printf("enter the content u want to appeand");
gets(str);

fputs(str,fp);

printf("\nsuccessfully appended");
fclose(fp);

}