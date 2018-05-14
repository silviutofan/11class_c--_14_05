#include <iostream>
#include <math.h>

using namespace std;

void input_graph_edges(int a[50][50], int* n, int* m){

    int i, j, k, y, x;

    //input number of points n and numbers of edges m

    cout << "Nr of points : "; cin >> n;
    cout << "Nr of edges : "; cin >> m;

    //initialize the table with value of 0

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            a[i][j] = 0;
        }
    }

    //input m pairs of nr of form (x, y)

    for(k=1; k<=m; k++){
        cout << "Give edge nr of order " << k;
        do{
            cin >> x >> y;
        }while(x<1 || x>n || y<1 || y>n || x==y);

        /* for every pair, make 1 element a[x][y]
        and a[y][x] which identifies edge (x, y) */

        a[x][y] = 1;
        a[y][x] = 1;

    }

}

int main(){

    int a[50][50], n, m;

    cout << "Input for graph by edges" << endl;
    cout << endl;

    input_graph_edges(a[50][50], n, m);

    cout << endl;

}
