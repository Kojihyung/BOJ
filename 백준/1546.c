#include <stdio.h>

int main()
{
    int i,n = 0;
    double max = 0;
    double sum = 0;

    scanf("%d", &n);
    double grade[n];

    for(i=0;i<n;i++)
    {
        scanf("%lf", &grade[i]);
    }

    for(i=0;i<n;i++)
    {
        if(max < grade[i])
            max = grade[i];
    }

    for(i=0;i<n;i++)
    {
        sum += (grade[i]/max)*100;
    }

    printf("%lf\n", sum/n);
    
}