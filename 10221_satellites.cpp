/*

*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main(){
    double s, a; // a:arc distance, s:chord distance
    string str;
    int r = 6440;
    double arc_distance;
    double chord_distance;
    double angle; // radius
    while (cin >> s >> a >> str){
        if (str == "min"){
            a /= 60;
        }
        if (a > 180){
            a = 360 - a;
        }
        angle = a * M_PI / 180.0;
        chord_distance = (s+r) * angle;
        arc_distance = 2 * (s+r) * sin(angle/2.0);
        cout << fixed << setprecision(6) << chord_distance << " " << arc_distance << endl;
    }
}