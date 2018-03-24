/*
sample input
AAABBC
122333
sample output

67 1
66 2
65 3
49 1
50 2
51 3
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

#define MAX = 1000
using namespace std;

struct char_count{
    char c;
    int count;
};

bool compare_char_count(char_count this_one, char_count another_one){
    return this_one.count < another_one.count;
}

int main(){
    string s;
    while (cin >> s){    
        map<char, int> m; 
        vector<char> vec;
        vector<char_count> char_count_vec;
        for (int i = 0; i < s.length(); i++){
            if (m.find(s[i]) == m.end())
                vec.push_back(s[i]);
            m[s[i]]++;
        }
        for (int i = 0; i < vec.size(); i++){
            struct char_count cc;
            cc.c = vec[i];
            cc.count = m[vec[i]];
            char_count_vec.push_back(cc);
        }
        sort(char_count_vec.begin(), char_count_vec.end(), compare_char_count);
        for (int i = 0; i < vec.size(); i++){
            cout << (int)(char_count_vec[i].c) << " " << char_count_vec[i].count << endl;
        }
        cout << endl;
    }
    return 0;
}