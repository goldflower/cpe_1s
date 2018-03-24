#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    string notes;
    char note;
    map<char, string> m;
    m['c'] = "0111001111";
    m['d'] = "0111001110";
    m['e'] = "0111001100";
    m['f'] = "0111001000";
    m['g'] = "0111000000";
    m['a'] = "0110000000";
    m['b'] = "0100000000";
    m['C'] = "0010000000";
    m['D'] = "1111001110";
    m['E'] = "1111001100";
    m['F'] = "1111001000";
    m['G'] = "1111000000";
    m['A'] = "1110000000";
    m['B'] = "1100000000";
    
    while (n--){
        cin >> notes;
        int count[10] = {0};
        int check;
        char last_note = '0';
        string last_fingers = "";
        for (int i = 0; i < notes.length(); i++){
            char current_note = notes[i];
            string current_fingers = m[current_note];
            if (last_note == '0'){
                for (int j = 0; j < current_fingers.length(); j++){
                    if (current_fingers[j] == '1')
                        count[j]++;
                }
                
            } else{
                for (int j = 0; j < current_fingers.length(); j++){
                    if (current_fingers[j] == '1' && last_fingers[j] != '1')
                        count[j]++;
                }
            }
            last_note = current_note;
            last_fingers = current_fingers;
        }
        for (int i = 0; i < 9; i++){
            cout << count[i] << " ";
        }
        cout << count[9] << endl;
    }
    return 0;
}