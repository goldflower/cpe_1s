/*
statistical analysis of a passage of encrypted text
write a program which performs a simple analysis of a given text

Input:
The first line contains a single positive decimal integer n
which is the number of lines which follow in the input.
The next n lines will contain zero or more characters(including whitespace)
whch is the text which must be analyzed

Output:
Each line of output contains a single uppercase letter followed by a single space,
the followed by a positive decimal integer.
The integer indicates how many times the corresponding letter appears in the input text.
output以頻率為順序輸出, 同樣頻率則以字母順序輸出
*/
/*
sample input
3
This is a test.
Count me 1 2 3 4 5.
Wow!!!! Is this question easy?

sample output
S 7 
T 6 
I 5 
E 4 
O 3 
A 2 
H 2 
N 2 
U 2 
W 2 
C 1 
M 1 
Q 1 
Y 1
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

class EngTimesPair{
    // the times of the alphabet apears
public:
    char eng;
    int times;
};

bool pairCmp(const EngTimesPair* thisPair, const EngTimesPair* otherPair){
    // custom compare rule
    if (thisPair->times > otherPair->times) return true;
    else if (thisPair->times == otherPair->times && thisPair->eng < otherPair->eng) return true;
    else return false;
}

int main(){
    int n;
    (cin >> n).get();
    map<char, int> countTable;
    vector<EngTimesPair*> pairList;
    string inputLine;
    while(n--){
        getline(cin, inputLine);
        for (int j = 0; j < inputLine.length(); j++){
            if (isalpha(inputLine[j])){
                countTable[toupper(inputLine[j])]++;
            }
        }
    }

    for (int i='A'; i<='Z'; i++){
        if (countTable[(char)i]){
            EngTimesPair* pairs = new EngTimesPair();

            pairs->eng = (char)i;
            pairs->times = countTable[(char)i];
            pairList.push_back(pairs);
        }
    }
    sort(pairList.begin(), pairList.end(), pairCmp);
    for (int i = 0; i < pairList.size(); i++)
        cout << pairList[i]->eng << " " << pairList[i]->times << endl;

    return 0;
}

