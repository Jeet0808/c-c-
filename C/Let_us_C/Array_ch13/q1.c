#include<stdio.h>
int main(){
    int n,arr[25],count = 0,i;
    printf("enter 25 no : ");
    for(i=1;i<=25;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter a no to be searched : ");
    scanf("%d",&n);
    for(i=1;i<=25;i++){
        if(arr[i]==n){
            count++;
        }
    }
    printf("no %d is found %d time(s)in the array",n,count);
    return 0;
}