#include <iostream>
#include <vector>
using namespace std;



int main(){
    int n;
    cin >> n;

    while(n--){
        vector<int> vec;
        int L;
        int c;
        vec.clear();
        cin >> L;
        for (int i = 0; i < L; i++){
            cin >> c;
            vec.push_back(c);
        }
        int current;
        bool did_swap = false;
        int count = 0;
        for (int i = 0; i < L; i++){
            current = vec[0];
            did_swap = false;
            for (int j = 0; j < L; j++){
                if (current > vec[j]){
                    //cout << vec[j] << " swap " << vec[j-1] << endl;
                    swap(vec[j], vec[j-1]);
                    did_swap = true;
                    count++;
                }
                else if (current < vec[j])
                    current = vec[j];
            }
            if (!did_swap){
                break;
            }
        }
        cout << "Optimal train swapping takes " << count << " swaps." << endl;
    }
}