/*
兩個二進位數
找到一個非1的數字使得兩進位被其整除
就是找是否互質啦幹
*/

/*
input:
first line: positive integer N < 10000
next line: S1_1
next line: S2_1
next line: s1_2
next line: s2_2
... till 2*N lines
no string is more then 30 characters

output:
if true:
pair #i: All you need is love!  
else:
Pair #i: Love is not all you need!
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int GCD(int a, int b){
    if (a > b){
        int tmp = b;
        b = a;
        a = tmp;
    }
    while(true){
        if (a == 0) return a+b;
        b = b % a;
        if (b == 0) return a+b;
        a = a % b;
    }
}

int base2to10(string base2){
    //cout << "handling " << base2 << endl;
    int length = base2.length();
    int base10 = 0;
    for (int i = length-1; i >= 0; i--){
        base10 += (base2[i] - '0') * pow(2, length-i-1);
    }
    //cout << base10 << endl;
    return base10;
}

int main(){

    int N;
    string s1, s2;
    int n1, n2, result;
    int i = 1;
    cin >> N;
    while(cin >> s1 >> s2){
        n1 = base2to10(s1);
        n2 = base2to10(s2);
        result = GCD(n1, n2);
        if (result == 1){
            cout << "Pair #" << i << ": Love is not all you need!" << endl;   
        }
        else{
            cout << "Pair #" << i << ": All you need is love!" << endl;
        }
        i += 1;
    }

}