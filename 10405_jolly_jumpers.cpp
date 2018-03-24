/*
a sequence of n > 0 if the absolute values of the 
difference between successive elements take on all
the values 1 through n - 1
e.g., 1 4 2 3 is jolly jumper, because 1 <= 3, 2, 1 <= n-1

input:
each line: n (n numbers)
output "Jolly" "Not jolly"
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int abs_diff;
    int flag = true;
    while (true){
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for (int i = 0; i < n-1; i++){
            abs_diff = abs(arr[i] - arr[i+1]);
            if (abs_diff > n - 1 | abs_diff < 1){
                cout << "Not jolly" << endl;
                flag = false;
                break;
            } 
        } 
        if (flag) cout << "Jolly" << endl;
    }
}