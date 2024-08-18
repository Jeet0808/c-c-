#include <stdio.h>

int main()
{
    printf("Hello dear costumer \n");
    int i, age;
    for (i=0; i<10; i++){
      printf("enter age : ");
        scanf("%d", &age);
          printf("%d\nyour age is \n", age);
        // if (age>10)
        // {
        //     break;
        // }
        if (age>10)
        {
            continue;
        }
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("we have not come accross any continue statements\n");
        printf("jeet is a good boy");
        
    }
    
    return 0;
}

