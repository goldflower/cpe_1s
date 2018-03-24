/*
M*N matrix

abbbaaaaaa
abbbaaaaaa
abbbaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaccaaaaaa
aaccaaaaaa

given (1,2) as center, the length of a side of the largest square is 3

input:
first line: test cases T
for each case
first line:
    M, N, Q
means MxN square
Q: the (r, c) pairs
*/
/*
sample input:
1
7 10 4 
abbbaaaaaa 
abbbaaaaaa 
abbbaaaaaa 
aaaaaaaaaa 
aaaaaaaaaa 
aaccaaaaaa 
aaccaaaaaa 
1 2
2 4
4 6
5 2
sample output:
7 10 4 
3
1
5
1
*/
#include <iostream>
using namespace std;

#define MAX 101

int main(){
    int T, M, N, Q;
    cin >> T;
    while(T--){
        cin >> M >> N >> Q;
        char matrix[MAX][MAX] = {'\0'};
        for (int i = 0; i < M; i++){
            for (int j = 0; j < M; j++){
                cin >> matrix[i][j];
            }
        }
        cout << M << " " << N << " " << Q << endl;
        while(Q--){
            int r, c;
            cin >> r >> c;
            char center = matrix[r][c];
            int start_r = r-1, start_c = c-1;
            char current_char = matrix[start_r][start_c];
            int length = 1;
            while(true){
                for (int i = 1; i < length+2; i++){
                    start_c++;
                    current_char = matrix[start_r][start_c];
                    if (current_char != center){
                        cout << length << endl;
                        break;
                    }
                }
                for (int i = 1; i < length+2; i++){
                    start_c--;
                    current_char = matrix[start_r][start_c];
                    if (current_char != center){
                        cout << length << endl;
                        break;
                    }
                }
                for (int i = 1; i < length+2; i++){
                    start_r--;
                    current_char = matrix[start_r][start_c];
                    if (current_char != center){
                        cout << length << endl;
                        break;
                    }
                }
                for (int i = 1; i < length+2; i++){
                    start_c++;
                    current_char = matrix[start_r][start_c];
                    if (current_char != center){
                        
                        break;
                    }
                }   
                start_c--;
                start_r--;
                length += 2;                                             
            }
            cout << length << endl;
        }       
    }
    return 0;
}

