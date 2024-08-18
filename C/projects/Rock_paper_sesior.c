#include<stdio.h>
#include<stdlib.h>

int main() {
    int c;
   while(1) {
    printf("Welcome to 'Rock & paper sesior' Game\n");
    printf("Enter your choise :  \n");
    printf("1.for Rock\n");
     printf("2.for paper\n");
      printf("1.for sesior\n");
      printf("To exit type '0' \n");
    scanf("%d",&c);
     printf("your choice is %d\n",c);

     if(c==0) {
        exit(0);
     }

   
    if(c==1) {
        printf("computer choice is %d\n",c+1);
        printf("you Win\n");
    } else if(c==2) {
        printf("computer choice is %d\n",c+1);
        printf("you loss");
    } else if(c==3) {
         printf("computer choice is %d\n",c-1);
        printf("you win\n");
    } 
   
    return 0;
}
}