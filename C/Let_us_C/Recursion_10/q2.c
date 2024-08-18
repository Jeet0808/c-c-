#include <stdio.h>
#include <math.h>
// find prime factors of a no recursivly;
void factor(int n){
    static int  i = 2;
    if(i<=n){
        if(n%i==0){
            printf("%d",i);
            n = n/i;
        }
        else 
            i++;
        factor(n);//recursive call;
    }
    return;
}
int main(){
    int n;
    printf("enter no : ");
    scanf("%d",&n);
    printf("prime fators are : ");
    factor(n);
    return 0;
}