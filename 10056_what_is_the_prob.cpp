/*
sample input:
2
2 0.166666 1  (2 players, success prob=0.166666, player 1 win)
2 0.166666 2

sample output:
0.5455
0.4545

*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int S;
    cin >> S;
    int N, I;
    double p;
    while(S--){
        cin >> N >> p >> I;
        double ans;
        ans = p * pow(1-p, I-1) / (1 - pow(1-p, N));
        cout << fixed << setprecision(4) << ans << endl;
    }
}
