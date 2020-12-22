#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stack>

using namespace std;

int main(){
    int a, b;
    int day = 0;
    int end = 0;
    

    scanf("%d %d", &b, &a);

    int c[a][b];

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            scanf("%d", &c[i][j]);
        }
    }
    stack< pair<int, int> > s;
    stack< pair<int, int> > s1;

    while(end == 0){
        end = 1;
        for(int i = 0; i < a; i++){
            for(int j = 0; j < b; j++){
                if(c[i][j] == 0){
                    end = 0;
                    break;
                }
            }
            if(end == 0) break;
        }

        if(end == 1) break;

        
        day++;
        if(day == 1){
            for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                    if(c[i][j] == 1){
                        if(0 <= j-1 && c[i][j-1] == 0) {c[i][j-1] = 2; s.push(make_pair(i, j-1));}
                        if(j+1 < b && c[i][j+1] == 0) {c[i][j+1] = 2; s.push(make_pair(i, j+1));}
                        if(0 <= i-1 && c[i-1][j] == 0) {c[i-1][j] = 2; s.push(make_pair(i-1, j));}
                        if(i+1 < a && c[i+1][j] == 0) {c[i+1][j] = 2; s.push(make_pair(i+1, j));}
                    }
                }
            }
            for(int i = 0; i < a; i++){
                for(int j = 0; j < b; j++){
                    if(c[i][j] == 2) c[i][j] = 1;
                }
            }
        }

        else{
            if(s1.empty() && !s.empty()){
                while(!s.empty()){
                    int i = s.top().first;
                    int j = s.top().second;
                    //cout << "s" << i << " " << j << endl;
                    s.pop();
                    if(0 <= j-1 && c[i][j-1] == 0) {c[i][j-1] = 1; s1.push(make_pair(i, j-1));}
                    if(j+1 < b && c[i][j+1] == 0) {c[i][j+1] = 1; s1.push(make_pair(i, j+1));}
                    if(0 <= i-1 && c[i-1][j] == 0) {c[i-1][j] = 1; s1.push(make_pair(i-1, j));}
                    if(i+1 < a && c[i+1][j] == 0) {c[i+1][j] = 1; s1.push(make_pair(i+1, j));}

                }
            }
            else if(s.empty() && !s1.empty()){
                while(!s1.empty()){
                    int i = s1.top().first;
                    int j = s1.top().second;
                    //cout << "s1" << i << " " << j << endl;
                    s1.pop();
                    if(0 <= j-1 && c[i][j-1] == 0) {c[i][j-1] = 1; s.push(make_pair(i, j-1));}
                    if(j+1 < b && c[i][j+1] == 0) {c[i][j+1] = 1; s.push(make_pair(i, j+1));}
                    if(0 <= i-1 && c[i-1][j] == 0) {c[i-1][j] = 1; s.push(make_pair(i-1, j));}
                    if(i+1 < a && c[i+1][j] == 0) {c[i+1][j] = 1; s.push(make_pair(i+1, j));}
                }
            }
            else if(s.empty() && s1.empty()) {day = -1; break;}
        }
    }

    cout << day;
    


    return 0;
}