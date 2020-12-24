#include <cstdio>

using namespace std;

int P[15];
int T[15];
int n;

int count(int start, int val){
    if(start > n-1) return val;
    else if(start == n-1 && T[start] != 1) return val;
    else if(start == n-1 && T[start] == 1) return val+P[start];
    else if(start+T[start] > n) return count(start+1, val);
    int val1 = count(start+1, val);
    int val2 = count(start+T[start], val+P[start]);
    if(val1 > val2) return val1;
    else return val2;
}

int main() {
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d %d", &T[i], &P[i]);
    }
    
    int val = 0;
    int ans = count(0, 0);

    printf("%d\n", ans);

    return 0;
}