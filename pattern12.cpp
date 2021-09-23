#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i= 1;i<=5;i++){ // outer loop will run from 1 to 5//
        for(int j=1;j<=i;j++){ // inner loop will run to i//
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;
}