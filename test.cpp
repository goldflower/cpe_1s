/*
add one more wall around the array to avoid over array range
use dx and dy to add around the boom
*/

#include <iostream>
using namespace std;

int main(){
    int dy[] = { -1, -1, 0, 1, 1, 1, 0 ,-1 };
    int dx[] = {  0, 1 , 1, 1, 0, -1, -1 ,-1 };
    int n,m,i,j,k,cases = 1;
    char sign;
    while(cin>>n>>m && (n!=0 || m!=0) ){
        int mines[n+2][m+2];

        for(i = 0;i <= n+1; i++){
            for(j = 0;j <= m+1; j++)
                mines[i][j] = 0;
        }
        for(i = 1;i <= n; i++){
            for(j = 1;j <= m; j++){
                cin>>sign;
                if(sign == '*')
                    mines[i][j] = 9;
                else if(sign == '.')
                    mines[i][j] = 0;
            }
        }
        for(i = 1;i <= n; i++){
            for(j = 1;j <= m; j++){
                if(mines[i][j] >= 9){
                    for(k = 0; k <8 ; k++){
                        mines[ i + dy[k] ][ j + dx[k] ] ++;
                    }
                }
            }
        }
        if(cases != 1)
            cout<<endl;
        cout<<"Field #"<<cases<<":"<<endl;
        for(i = 1;i <= n; i++){
            for(j = 1;j <= m; j++){
                if(mines[i][j]>=9)
                    cout<<'*';
                else
                    cout<<mines[i][j];
            }
            cout<<endl;
        }
        cases++;
    }
}