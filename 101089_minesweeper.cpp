/*
踩地雷
MxN field
input:
first line:
n, m; 0 < n,m <= 100
the next n lines contains exactly m characters
save as '.', mine as '*'
n = m = 0 means end

output:
Field #x:

sample input:

44 
*... 
.... 
.*.. 
.... 
35 
**... 
..... 
.*... 
00

sample output:
Field #1:
*100
2210
1*10
1110
Field #2:
**100
33200
1*100
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    int dx[8] = {-1, 0, 1, 1, 1, 0,-1,-1};
    int dy[8] = {-1,-1,-1, 0, 1, 1, 1, 0};
    string s;
    int cases = 1;
    while (true){
        int N, M;
        cin >> N >> M;
        if (N == 0 & M == 0) break;
        int matrix[N+2][M+2];        
        for (int i = 0; i < N+1; i++){
            for (int j = 0; j < M+1; j++){
                matrix[i][j] = 0;
            }
        }
        for (int i = 1; i < N+1; i++){
            cin >> s;
            for (int j = 1; j < M+1; j++){
                if (s[j-1] == '*') {
                    matrix[i][j] = 9;
                } else{matrix[i][j] = 0;}
            }
        }    

        for (int i = 1; i < N+1; i++){
            for (int j = 1; j < M+1; j++){
                if (matrix[i][j] >= 9){
                    for (int k = 0; k < 8; k++){
                        matrix[i+dy[k]][j+dx[k]]++;
                    }
                }
            }
        }
        if (cases != 1) cout << endl;
        cout << "Field #" << cases << ":" << endl;
        cases++;
        for (int i = 1; i < N+1; i++){
            for (int j = 1; j < M+1; j++){
                if (matrix[i][j] >= 9){
                    cout << '*';
                }else{
                    cout << matrix[i][j];   
                }
            }
            cout << endl;
        }
    }
}