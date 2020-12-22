#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main(){
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    int x, y;

    x = (c*e-b*f)/(a*e-b*d);
    y = (a*f-c*d)/(a*e-b*d);

    cout << x << " " << y;

    return 0;
}


