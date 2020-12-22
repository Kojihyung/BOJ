#include<stdio.h>

int main(){
    int a[9];
    int i;
    for(i = 0; i < 9; i++){
        scanf("%d", &a[i]);
    }

    int num = 0;
    int max = 0;

    for(int i = 0; i < 9; i++){
        if(a[i] > max){
            max = a[i];
            num = i;
        }
    }

    printf("%d\n", max);
    printf("%d", num+1);

    return 0;
}