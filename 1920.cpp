#include<iostream>
#include<algorithm>
#include<stdio.h>

using namespace std;

int binarySearch(int*, int, int, int);

int binarySearch(int* tree, int start, int end, int find){
    int mid;
    while(end >= start){
        mid = (start+end)/2;
        if(tree[mid] == find) return 1;
        else if(tree[mid] > find) end = mid-1;
        else start = mid+1;
    }

    return 0;
}

int main(){
    int a, b;
    int result;

    scanf("%d", &a);
    int c[a];
    for(int i = 0; i < a; i++) scanf("%d", &c[i]);

    sort(c, c+a);

    scanf("%d", &b);
    int find;

    for(int i = 0 ; i < b; i++){
        scanf("%d", &find);
        result = binarySearch(c, 0, a-1, find);
        if(result == 0) printf("0\n");
        else printf("1\n");
    }

    return 0;
}