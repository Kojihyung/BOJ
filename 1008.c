#include<stdio.h>

int main(){
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("%.9lf", a/b); // 10^-9 이하의 오차만 허용
    return 0;
}