/*
doomsday: a certain day of the week which always
occurs in the same dates
e.g. 2011 4/4, 6/6, 8/8, 10/10, 12/12 are mondays

for leap year: 1/11, 2/22
non leap year: 1/10, 2/21


input:
first line: number of test cases
for each test case, there's a line with 2 numbers: M D
M:month(1-12)
D:day(1-31)

output:
for each test case, output the day of the week where that date occurs in 2011
:Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
*/
/*
sample input:
8
1 6
2 28 
4 5
5 26 
8 1 
11 1 
12 25 
12 31

sample output:
Thursday
Monday
Tuesday
Thursday
Monday
Tuesday
Sunday
Saturday
*/

#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<int, string> weekday_map;
    map<int, int> month_days_map;
    int month, day;
    int weekday;
    int cases;
    int total_days;
    // 2011/01/01: Saturday
    weekday_map[1] = "Sunday";
    weekday_map[2] = "Monday";
    weekday_map[3] = "Tuesday";
    weekday_map[4] = "Wednesday";
    weekday_map[5] = "Thursday";
    weekday_map[6] = "Friday";
    weekday_map[0] = "Saturday";
    month_days_map[1] = 0;
    month_days_map[2] = month_days_map[1]+31;
    month_days_map[3] = month_days_map[2]+28;
    month_days_map[4] = month_days_map[3]+31;
    month_days_map[5] = month_days_map[4]+30;
    month_days_map[6] = month_days_map[5]+31;
    month_days_map[7] = month_days_map[6]+30;
    month_days_map[8] = month_days_map[7]+31;
    month_days_map[9] = month_days_map[8]+31;
    month_days_map[10] = month_days_map[9]+30;
    month_days_map[11] = month_days_map[10]+31;
    month_days_map[12] = month_days_map[11]+30;

    (cin >> cases).get();
    for (int i = 0; i < cases; i++){
        cin >> month >> day;
        total_days = month_days_map[month] + day-1;
        //cout << total_days << endl;
        weekday = (total_days)%7;
        cout << weekday_map[weekday] << endl;
    }
    return 0;
}
