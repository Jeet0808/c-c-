#include<stdio.h>
int getsum(int n){
    int sum = 0;
if(n==25)
    return sum;
sum = n + getsum(++n);
    return (sum);
}

int main(){
    int s;
   s = getsum(0);
    printf("sum of first 25 digits  = %d",s);


    return 0;
}