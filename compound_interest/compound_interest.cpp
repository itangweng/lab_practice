#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float s, r, d;
    cin >> s >> r;

    d = s*(( pow(1+r/100,13))-1)/(r/100);

    cout << int(d);
    return 0;
}