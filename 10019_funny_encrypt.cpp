#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;


string dec2bin(int n){
    vector<string> bin;
    string s = "";
    while(n != 0){
        if (n % 2 == 0){
            bin.push_back("0");
        } else{
            bin.push_back("1");
        }
        n /= 2;
    }
    for (int i = bin.size()-1; i >= 0; i--){
        s += bin[i];
    }
    //cout << s << endl;
    return s;
}

string hex2bin(int n){
    int dec = 0;
    string s = to_string(n);
    for (int i = s.length()-1; i >= 0; i--){
        dec += (s[i]-'0') * pow(16, s.length()-1-i);
    }
    return dec2bin(dec);
}

int main(){
    int N, M;
    string s1, s2;
    int count = 0;
    cin >> N;
    while(N--){
        cin >> M;
        s1 = dec2bin(M);
        s2 = hex2bin(M);
        count = 0;
        for (int i = 0; i < s1.length(); i++){
            if (s1[i] == '1'){
                count++;
            }
        }
        cout << count << " ";
        count = 0;
        for (int i = 0; i < s2.length(); i++){
            if (s2[i] == '1'){
                count++;
            }
        }        
        cout << count << endl;
    }
}