#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;

    cin >> n;
    int count = 1;
    while(n--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int distance1 = 0, distance2 = 0;
        for (int i = 1; i <= x1+y1; i++){
            distance1 += i;
        }
        distance1 += x1;
        for (int i = 1; i <= x2+y2; i++){
            distance2 += i;
        }
        distance2 += x2;
        cout << "Case " << count << ": " << abs(distance1-distance2) << endl;
        count++;
    }

}