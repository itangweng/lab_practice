#include <iostream>
using namespace std;

int main(){
    int a, b;
    int a1, a2, a3, a4;
    int b1, b2, b3, b4;
    int num_A, num_B;
    int i;

    num_A = num_B = 0;
    cin >> a >> b;

// record all digits  
    a1 = a/1000 %10;
    a2 = a/100 %10;
    a3 = a/10 %10;
    a4 = a%10;

    b1 = b/1000 %10;
    b2 = b/100 %10;
    b3 = b/10 %10;
    b4 = b%10;

// compare all digits
    if (a1==b2 || a1==b3 || a1==b4)
    {
        num_B++;
    }
    else if(a1==b1)
    {
        num_A++;
    }
    

    if (a2==b1 || a2==b3 || a2==b4)
    {
        num_B++;
    }
    else if(a2==b2)
    {
        num_A++;
    }

    if (a3==b2 || a3==b1 || a3==b4)
    {
        num_B++;
    }
    else if(a3==b3)
    {
        num_A++;
    }

    if (a4==b2 || a4==b3 || a4==b1)
    {
        num_B++;
    }
    else if(a4==b4)
    {
        num_A++;
    }

    cout << num_A << "A"<< num_B <<"B";

    return 0;
}