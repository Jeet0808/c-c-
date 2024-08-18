#include<stdio.h>
#include<math.h>

long power(a,b) {
  //  1st Mathod
  //return pow(a,b);

   // 2nd Mathode
    long x = 1;
  for(int i=1;i<=b;i++) {
    x = x*a;
  }
  return x;
}
int main() {
    int a,b;
    printf("enter a & b : ");
    scanf("%d%d",&a,&b);
    long p = power(a,b);
    printf("%d to the power %d is  = %d",a,b,p);
    return 0;

}