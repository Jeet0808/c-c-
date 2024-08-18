#include<stdio.h>
void fibo(int old,int current){
static int terms = 2;
int new;
if(terms<25){
    new = old + current;
    printf("%d\t",new);
    terms = terms + 1;
    fibo(current,new);
}
else
    return;
}
int main(){
    int n,old = 0,current = 1;
    printf("%d\t%d\t",old,current);

    fibo(old,current);
    return 0;
}