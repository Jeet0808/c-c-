#include<stdio.h>
#include<math.h>

void result(int a,int b,int c,float*avg,float*pers) {
*avg = (a+b+c)/3;
*pers = *avg;
}
int main(){
    int a,b,c;
    float avg,pers;
    printf("enter marks of a studen in three subjects : ");
    scanf("%d%d%d",&a,&b,&c);
    result(a,b,c,&avg,&pers);
    printf("avg = %f\npers = %f\n",avg,pers);
    return 0;
}