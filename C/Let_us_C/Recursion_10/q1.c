#include<stdio.h>
int sum(int num){
    int reminder , sum = 0;
    while(num>0){
        reminder = num%10;
        sum = sum + reminder;
        num = num/10;

}
    return (sum);

}
int recursivesum(int num ) {
    int reminder, rsum = 0;
    if(num!=0){
        reminder = num%10;
      rsum = reminder + recursivesum(num/10);

    }
    return rsum;
}
int main(){
    int n;
    printf("enter n : ");
           
    scanf("%d",&n);
    int s = sum(n);
    printf("sum without recursion = %d\n",s);
    int rs = recursivesum(n);
    printf("sum with recursion = %d\n",rs);
    return 0;
}