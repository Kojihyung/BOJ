#include<stdio.h>
#include<string.h>

int main(){
    int a;
    scanf("%d", &a);
    int b[a];
    char c[a][1000];
    for(int i = 0; i < a; i++){
        scanf("%d", &b[i]);
        scanf("%s", c[i]);
    }
    for(int j = 0; j < a; j++){
        for(int k = 0; k < strlen(c[j]); k++){
            for(int i = 0; i < b[j]; i++){
                printf("%c", c[j][k]);
            }
        }
        
        printf("\n");
    }
    return 0;
}