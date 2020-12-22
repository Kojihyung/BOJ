#include<iostream>
#include<cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long min, max;
    cin >> min >> max;
    long long squares[1000001] = {0};
    bool nums[1000001] = {false};

    long long a = (long long)sqrt(max);

    long long out = 0;
    long long size = 0;

    for(long long i = 2; i<=a; i++){
        squares[i] = i*i;
        size++;
    }

    for(int i = 2; i < size+2; i++){
        long long real_min = min;
        if(real_min % squares[i] != 0){
            real_min = (min/squares[i] + 1)*squares[i];
        }

        for(long long j = real_min; j <= max; j += squares[i]){
            if(!nums[j-min]){
                nums[j-min] = true;
                out++;
            }
        }
    }

    cout << max-min-out+1 << endl;

    return 0;
}