#include <stdio.h>
#include <stdlib.h>

void main(){
    FILE *fp=NULL;
    char ch = 'n' ;
    fp=fopen("bcd.txt","w");
    if(fp==NULL)
    {
        printf("error");
        exit(1);
    }
    fputc(ch,fp);
    fclose(fp);

}