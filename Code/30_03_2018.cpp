#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main(){

    int i, j, m[2][2], n = 2;

    for (i = 0; i <= n; i ++){
        for (j = 0; j <= n; j ++){
            m[i][j] = 0;
        }
    }

    int s = 0;
    int k = 0;
    int x, y;
    int s1, s2;

    do{

    for (i = 0; i <= n; i ++){
        for (j = 0; j <= n; j ++){
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Player 1 - Select X Position: "; cin >> x;
    cout << endl;
    cout << "Player 1 - Select Y Position: "; cin >> y;
    cout << endl;

    m[x][y] = 1;

    cout << endl;
    cout << "Player 2 - Select X Position: "; cin >> x;
    cout << endl;
    cout << "Player 2 - Select Y Position: "; cin >> y;
    cout << endl;

    m[x][y] = 2;


    for (i = 0; i <= n; i ++){
        for(j = 0; j <= n; j++){
            s = s + m[i][j];
        }
        if ( s == 3 || s == 6 ){
            k = k + 1;
        }
    }

    s1 = m[0][0] + m[1][1] + m[2][2];
    s2 = m[0][2] + m[1][1] + m[2][0];

    if(s1 == 3 || s1 == 6 || s2 == 3 || s2 == 6){
        k = k + 1;
    }

    }while(k != 1);

}
