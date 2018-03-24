/*
input: contain only one test case i.e. the encoded msg
output: decoded msg
*/
#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<char, char> M;
    string s1_decoded = "qwertyuiop";
    string s1_encoded = "ertyuiop[]";
    string s2_decoded = "asdfghjkl";
    string s2_encoded = "dfghjkl;'";
    string s3_decoded = "zxcvbnm";
    string s3_encoded = "cvbnm,.";
    for (int i = 0; i < s1_decoded.length(); i++){
        M[s1_encoded[i]] = s1_decoded[i];
    }
    for (int i = 0; i < s2_decoded.length(); i++){
        M[s2_encoded[i]] = s2_decoded[i];
    }
    for (int i = 0; i < s3_decoded.length(); i++){
        M[s3_encoded[i]] = s3_decoded[i];
    }        
    string text;
    getline(cin, text);
    for (int i = 0; i < text.length(); i++){
        if (text[i] == ' ')
            cout << " ";
        else
            cout << M[tolower(text[i])];
    }
    cout << endl;
    return 0;
}