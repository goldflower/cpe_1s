#include <iostream>
#include <string>
using namespace std;


int g(string n){
    if (stoi(n) < 10){
        return stoi(n);
    }
    int s = 0;
    for(int i = 0; i < n.length(); i++){
        s += (n[i] - '0');
    }
    return g(to_string(s));
}

int main(){
    string n;
    int result;
    while (cin >> n){
        if (n == "0")
            break;
        result = g(n);
        cout << result << endl;
    }
    return 0;
}