/*
given N based integer number R, R is divisible by N-1
print the smallest possible value for N
 2 <= N <=62, 
 symbols for 62 based number is 0...9, A...Z, a...z
 symbols for 61 based number is 0...9, A...Z, a...y

Input:
each line contain an integer number of any integer base 2...62
determine the smallest possible base

Output:
impossible: output "such number is impossible!"
*/
/*
sample input
3
5
A

sample output
4
6
11
*/
/*
idea:
若一個n進位數可被n-1整除
則其每位數總和也會被n-1整除
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string input;
    while(cin >> input){
        int num, sum = 0, ans=-1, maxNum = -1;
        for (int i = 0; i < input.length(); i++){
            //cout << input[i] << endl;
            if (input[i] >= '0' && input[i] <= '9'){
                num = input[i] - '0';
                //cout << input[i] << " is " << num << endl;
            }
            else if (input[i] >= 'A' && input[i] <= 'Z'){
                num = input[i] - 'A' + 10;
                //cout << input[i] << " is " << num << endl;
            }
            else if (input[i] >= 'a' && input[i] <= 'z'){
                num = input[i] - 'a' + 10 + 26;
                //cout << input[i] << " is " << num << endl;
            }
            else
                continue;

            if (num > maxNum)
                maxNum = num; 
            sum += num;     

        }
        if (!maxNum)
            maxNum = 1;

        for (int i = maxNum; i<=61; i++){//33819 => 至少從9(即10-1)開始除
            if (sum % i == 0){
                ans = i + 1;
                break;
            }
        }
        if (ans == -1)
            cout << "such number is impossible!" << endl;
        else
            cout << ans << endl;
    }   
    return 0;
}