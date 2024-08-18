#include<stdio.h>
// compute greatest common divise -euclides algirithm;
int fun(int ,int );
int main(){
    int j,k;
    printf("\nEnter two no : ");
    scanf("%d%d",&j,&k);
   int  z = fun(j,k);
    printf("GREATEST COMMON divisor of the two no is %d\n",z);

    return 0;
}
// Function to calculate GCD ;
int fun(int j,int k) {
    int r = 1;
    int n = 0;
    if(k>j){
        int temp = j;
        j = k;
        k = temp;
    }
    else {
        if(j==k) 
        return j;
    }
    while(1) 
    {
      int r = j/k;
      int m = j-(r*k);

      if(!(j%k))  // j is exact multiple of k 
      n = k;
      if(m==0)
      break;

      j = k;
      k = m;
      n = m;

    }
    return n;
}