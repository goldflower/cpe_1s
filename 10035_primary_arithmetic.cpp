#include <iostream>
#include <string>
#include <cmath>
using namespace std;


int main(){

    string n, m;
    int a, b;
    int s;
    while(cin>>n>>m){
        int count = 0;
        int carry = 0;
        if (n == "0" && m == "0"){
            break;
        }
        s = min(n.length(), m.length());
        for (int i = s-1; i >= 0; i--){
            a = n[i] - '0';
            b = m[i] - '0';
            cout << a << " " << b << endl;
            if (a + b + carry > 9){
                count++;
                carry = 1;
            } else{
                carry = 0;
            }
        }
        if (count == 0){
            cout << "No carry operation." << endl;
        } else if (count == 1){
            cout << count << " carry operation." << endl;
        } else{
            cout << count << " carry operations." << endl;;
        }

    }

}