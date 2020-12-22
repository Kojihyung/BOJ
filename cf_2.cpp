#include<iostream>

using namespace std;

int gcd(int a, int b){
	while(b!=0){
		int r = a%b;
		a= b;
		b= r;
	}
	return a;
}

int main(){
    int a;
    cin >> a;
    int c;
    int d;
    int e;
    int lcm;


    int t = 0;
    int out ;

    for(int i = 0; i < a; i++){
        cin >> c;

        if(c%2 == 0){
            d = c/2;
            e = c/2;
        }
        else{
            t = 0;
            int j;
            for(j = 1; j*j < c; j++){
                if(c%j==0){
                    if(t == 1) {out = c/j; t++; break;}
                    t++;
                }
            }
            if(j*j == c) out = j;
            else if(t == 1) out = 1;

            d = out;
            e = c - out;
        }

        cout << d << " " << e << "\n";


    }

    return 0;
}