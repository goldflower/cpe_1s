#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;


bool check_prime(int n){
    int p = sqrt(n) / 1;
    bool result = true; 
    for (int i = p; i >= 2; i--){
        if (n % i == 0){
            result = false;
            break;
        }
    }
    return result;
}

int main(){
    string N;
    while(cin >> N){
        bool result1, result2;
        result1 = check_prime(stoi(N));
        if (!result1){
            cout << N << " is not prime." << endl;
            continue;
        }
        string tmp = N;
        reverse(tmp.begin(), tmp.end());
        result2 = check_prime(stoi(N));
        if (!result2){
            cout << N << " is prime." << endl;
        } else{
            cout << N << " is emirp." << endl;
        }
    }
}