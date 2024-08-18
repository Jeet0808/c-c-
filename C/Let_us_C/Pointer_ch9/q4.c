#include<stdio.h>
#include<math.h>

void fun(int a,int b,int c);
int main(){
    int a,b,c;
    printf("enter a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("enterd no are : %d %d %d ",a,b,c);
    printf("after circulying : ");
    fun(a,b,c);
    return 0;
}

void fun(int a,int b,int c) {
    int t = b;
    b = a;
    a = c;
    c = t;
    
    printf("%d%d%d",a,b,c);
}