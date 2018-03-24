/*
a[1] = n, a[i] = a[i-1] / m
a[i] is divisible by m for all 1 <= i < k
a[1] > ... > a[k]

input:
arbitrary number of lines, consist 2 non-negative intefers n, m
output:

sample input:
125 5
30 3
80 2
81 3

sample output:
125 25 5 1
Boring!
Boring!
81 27 9 3 1

*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, m;
    while (cin >> n >> m){
        vector<int> result_vec;
        result_vec.push_back(n);
        bool flag = true;
        while(n != 1){
            if (n % m != 0){
                cout << "Boring!" << endl;
                flag = false;
                break;
            }
            else{
                n /= m;
                result_vec.push_back(n);
            }

        }
        if (flag){
            for (int i = 0; i < result_vec.size(); i++){
                if (i < result_vec.size()-1)
                    cout << result_vec[i] << " ";
                else
                    cout << 1 << endl;
            }
        }
    }
}