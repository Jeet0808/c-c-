#include<stdio.h>
void binary(int n){
    int r;
    r = n%2;
    n = n/2;
    if(n==0){
        printf("binary  is %d",r);

    }
    else {
        binary(n);
        printf("%d",r);
    }
}
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    binary(n);
    return 0;
}
