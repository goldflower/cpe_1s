#include <iostream>
#include <vector>
#include <string>

#define MAX 100000000

using namespace std;

int main(){
    int n;
    int current_num;
    int tmp_num;
    cin >> n;
    vector<long int> fab_vec;
    fab_vec.push_back(0); // i = 0
    fab_vec.push_back(1); // i = 1
    while (fab_vec[fab_vec.size()-1] + fab_vec[fab_vec.size()-2] <= MAX){
        fab_vec.push_back(fab_vec[fab_vec.size()-1] + fab_vec[fab_vec.size()-2]);
    }
    for (int j = 0; j < n; j++){
        while (cin >> current_num){
            cout << current_num << " = ";
            int tmp_num = current_num;
            bool flag = false;
            for (int i = fab_vec.size()-1; i > 1; i--){
                if (tmp_num - fab_vec[i] >= 0){
                    cout << 1;
                    tmp_num -= fab_vec[i];
                    flag = true;
                } else if (flag){
                    cout << 0;
                }
            }
            cout << " (fib)" << endl;
        }
    }
    return 0;
}