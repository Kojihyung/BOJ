#include <stdio.h>
#include <vector>
#include <iostream>
#include <utility>
#include <list>
#include <algorithm>
#include <math.h>

using namespace std;

vector<int> v[501];
int visit[501];
list<int> li[501];
int p[501];
int prevInt = 0;

int main()
{
    int N;
    scanf("%d", &N);
    int b;
    int c = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            scanf("%d", &b);
            if (b == 1 && i != j)
            {
                v[i].push_back(j);
                c++;
            }
        }
    }
    
    int cnt = 0;
    for (int i = 1; i <= N; i++)
    {
        for (int k = 0; k < v[i].size(); k++)
        {
            int a = v[i][k];
            for (int j = 0; j < v[a].size(); j++)
            {
                if (i == v[a][j])
                {
                    int check = 1;
                    for(int l = 0; l <= cnt; l++){
                        if (find(li[l].begin(), li[l].end(), i) != li[l].end() && find(li[l].begin(), li[l].end(), a) != li[l].end())
                        {
                            check = 0;
                        }
                        else if (find(li[l].begin(), li[l].end(), i) != li[l].end())
                            {li[l].push_back(a); check = 0;}
                        else if (find(li[l].begin(), li[l].end(), a) != li[l].end())
                            {li[l].push_back(i); check = 0;}
                    }
                    if(check == 1)
                    {
                        cnt++;
                        li[cnt].push_back(i);
                        li[cnt].push_back(a);
                    }
                    break;
                }
            }
        }
    }
    long long out = 1;
    int check = 0;
    for (int i = 1; i <= cnt; i++)
    {
        int temp = li[i].size();
        temp--;
        check = 0;
        for(int j = 1; j <= N; j++){
            for(int k = 0; k < v[j].size(); k++){
                if(find(li[i].begin(), li[i].end(), j) == li[i].end() && find(li[i].begin(), li[i].end(), v[j][k]) != li[i].end()){
                    check++;
                    break;
                }
            }
        }
        while (temp--)
        {
            out *= (temp+1);
            out = out % 1000000007;
        }
        out *= (long long)pow(li[i].size(), check);
        out = out % 1000000007;
    }

    cout << out << endl;

    return 0;
}