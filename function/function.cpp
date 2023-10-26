#include <iostream>
#include <vector>
#include <string>

using namespace std;
// function f
int f(int & x){
    int ans;
    ans = 5*(x)-7;
    return ans;
}

// function g
int g(int & x, int & y){
    int ans;
    ans = 3*(x) + 2*y -10;
    return ans;
}

// function h
int h(int & x, int & y, int & z){
    int ans;
    ans = 6*x + 10*y - 9*z + 87;
    return ans;
}

// evaluate the values

int eval(vector<string> expre, int & idx){
    string token = expre[idx];
    idx++;
    int ans;
    if (token=="f"){
        int sub;
        sub = eval(expre,idx);
        ans = f(sub);
        // cout <<  "using f  : " << ans << endl;
        // cout << "index num : " <<idx << endl;
        return ans;
    }
    else if (token=="g"){
        int sub2, sub3;
        sub2 = eval(expre,idx);
        sub3 = eval(expre,idx);
        ans = g(sub2,sub3);
        // cout <<  "using g  : " <<ans<<endl;
        // cout << "index num : " <<idx << endl;
        return ans;
    }
    else if (token=="h"){
        int sub4, sub5, sub6;
        sub4 = eval(expre,idx);
        sub5 = eval(expre,idx);
        sub6 = eval(expre,idx);
        ans = h(sub4,sub5,sub6);
        // cout << "using h  : " << ans << endl;
        // cout << "index num : " << idx << endl;
        return ans;
    }
    else {
        ans = stoi(token);
        // cout << "using number :" << ans << endl;
        // cout <<"index num  : " << idx << endl;
        return ans;
    }
}



int main(){
    int num;
    int ans;
    
    cin >> num;
    vector<string> expre(num);
    // initialize expression into a vector
    for (int i=0;i<num;++i){
        cin >> expre[i];
    }
    // 
    int idx = 0;
    ans = eval(expre,idx);


    cout << ans << endl; 

    return 0;
}