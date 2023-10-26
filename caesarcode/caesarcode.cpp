#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int a;
    char lec;
    cin >> a;
    a %=26;
    cin.get();
    while(cin.get(lec)){
        if (lec=='\n')
            break;
        else if ((unsigned int)lec > 96 && (unsigned int)lec <123){
            lec = (char)((unsigned int) lec + a );
            if ((unsigned int) lec < 97)
                lec = (char) ((unsigned int) lec + 26);
            else if ((unsigned int) lec > 122)
                lec = (char) ((unsigned int) lec - 26);
        }
        cout << lec;
    }

    return 0;
}