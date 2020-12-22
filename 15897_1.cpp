#include <cstdio>
 
long long ans;
int n;
 
int main() {
    scanf("%d", &n);
    for (int i=n; i > 0; i=(n-1)/((n-1)/i+1))
        ans+=((n-1)/i+1)*(i-((n-1)/((n-1)/i+1)));
    printf("%lld\n", ans);
}
 