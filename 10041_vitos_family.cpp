/*
Vito wants to minimize the total distance to all of them and 
has blackmailed you to write a program that solve his problem

Input:
The first line contains the number of test cases.
For each test case you'll be given the integer number
of relatives r(0 < r < 500) and the street numbers (also integers)
s1, s2, ..., si, ..., sr, 0<si<30000

Output:
For each test case, write the minimal sum of distances from
the optimal Vito's house to each one of his relatives.
dij = |si-sj|

sample input:
2
2 2 4
3 2 4 6

sample output:
2
4
*/
/*
sol:
1. sorting all the houses
2. find the center of the relatives
3. sum up the distances
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib> // functions like atoi, strtof, malloc,
using namespace std;

int main(){
    int cases, relatives, input, location;
    vector<int> relative_vector;
    cin >> cases;
    while (cases != 0){
        int sum = 0;
        relative_vector.clear();
        cin >> relatives;
        for (int i = 0; i < relatives; i++){
            cin >> input;
            relative_vector.push_back(input);
        }
        sort(relative_vector.begin(), relative_vector.end()); // sort 
        location = relative_vector[relatives/2]; // don't have to consider odd or even
        for (int i = 0; i < relatives; i++){
            sum += abs(location - relative_vector[i]);
        }
        cout << sum << endl;
        cases--;
    }
    return 0;

}