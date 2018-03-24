#include <iostream>
#include <string>

using namespace std;

class Dice{
public:
    int top=1, bottom=6;
    int north=2, south=5;
    int east=4, west=3;

    void rotate(string command){
        if (command == "north"){
            swap(top, north);
            swap(south, top);
            swap(bottom, south);            
        } else if (command == "south"){
            swap(top, south);
            swap(south, bottom);
            swap(bottom, north);            
        } else if (command == "east"){
            swap(top, east);
            swap(east, bottom);
            swap(bottom, west);            
        } else if (command == "west"){
            swap(top, west);
            swap(west, bottom);
            swap(bottom, east);            
        } else cout << "WTF" << endl; return;
    }
};

int main(){
    
    int N;
    cin >> N;
    while(!N){
        string command;
        Dice D;
        for (int i = 0; i < N; i++){
            cin >> command;
            D.rotate(command);
        }
        cout << D.top << endl;
        cin >> N;
    }
    return 0;

}