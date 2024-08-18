#include <stdio.h>
#include <math.h>

int fun(int a, int b, int c);

int main() {
    int a, b, c;
    printf("Enter a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    int area = fun(a, b, c);
    printf("Area is %d\n", area);
    return 0;
}

int fun(int a, int b, int c) {
    int s = (a + b + c) / 2;
    int computed_area = sqrt(s * (s - a) * (s - b) * (s - c));
    return computed_area;
}
