#include<stdio.h>

void prime(int n) {
    int i = 2;
    while(n!=1) {
        if(n%i==0)
        printf("%d *",i);
        else 
        {
            i++;
            continue;
        }
        n = n/i;
    }
    
}

int main(){
int n;
printf("enter a no : ");
scanf("%d",&n);
prime(n);
return 0;
}