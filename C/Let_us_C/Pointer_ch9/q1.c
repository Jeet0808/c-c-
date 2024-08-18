#include<stdio.h>
#include<math.h>

void fun(int*sum,int*avg,double*standerd_deviation) {
    int n1,n2,n3,n4,n5;
    printf("enter five no : ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum = n1+n2+n3+n4+n5;
    *avg = *sum/5;
    *standerd_deviation = sqrt(

    (pow((n1-*avg),2) + pow((n2-*avg),2) + pow((n3-*avg),2) +pow((n4-*avg),2) + pow((n5-*avg),2) 
    
    ));
    
}

int main(){
    int sum,avg;
    double standerd_deviation;
    fun(&sum,&avg,&standerd_deviation); // function call by reference
    printf("sum = %d\navg = %d\n&standerd_deviation = %lf\n",sum,avg,standerd_deviation);
    return 0;

}