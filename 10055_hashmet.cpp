/*
input:
contains two numbers in every line
each line denotes the number in army and the opponent's

output:
for each line of input
print the difference of number

Sample Input
10 12
10 14
100 200
Sample Output
2
4 100
*/
#include <iostream>

using namespace std;

int main(){
    long long int n1, n2;
    while (cin >> n1 >> n2){
        cout << abs(n1-n2) << endl;
    }
    return 0;
}
