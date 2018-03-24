/*
find
argminA(sum(|X1-A|,|X2-A|,...,|XN-A|))

Input:
contains several blocks
start with n(0<n<=1000000)
next will be n numbers (each < 65536)

output:
for each case, output
第一個是最小值的A，
第二個是在全部的數字中幾個數字符合A的性質，
第三個是要你算出有幾個不同符合A性質的數字，這些數字包含沒有出現在這堆數字裡面的。
*/
/*
sample input
2 
10 
10 
4 
1 
2 
2 
4
sample output
10 2 1 
2 2 1
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> nums;
        int mid_loc;
        int count_mid = 0;
        int diff_val_num;
        int mid_num;
        while (n--){
            int num;
            cin >> num;
            nums.push_back(num);
        }
        sort(nums.begin(), nums.end());
        mid_loc = (nums.size()-1) / 2;
        mid_num = nums[mid_loc];
        if (nums.size() % 2 == 1){ // odd
            diff_val_num = 1;
            for (int i = 0; i < nums.size(); i++){
                if (nums[i] == mid_num) count_mid++;
            }
        }else{
            diff_val_num = nums[mid_loc+1] - nums[mid_loc] + 1;
            for (int i = 0; i < nums.size(); i++)
                if (nums[i] == nums[mid_loc] | nums[i] == nums[mid_loc+1])
                    count_mid++;
        }
        cout << mid_num << " " << count_mid << " " << diff_val_num << endl;
    }
}