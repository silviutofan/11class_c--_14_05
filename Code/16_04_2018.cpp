#include <iostream>

using namespace std;

int val=0,start=0;

void sumAlgo(int n){

    if(start==n){ cout<<n; return ;}

    val=0;
    start++;

    for(int i=0 ; i<n ; i++){
    val=start+i;
    if(n == val && i>start) cout<<start<<"+"<<i<<endl;
    }

    sumAlgo(n);

}


main(){

    int numb;
    cout<<"enter a number :";
    cin>>numb;

    sumAlgo(numb);

}
