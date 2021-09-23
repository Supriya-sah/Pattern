//pattern of square  3 rows and 3 columns//
#include<iostream>
using namespace std;
int main(){
    int n=3;
    for(int i=0;i<3;i++){     //outer loop for printing next line.
        for(int j=0;j<3;j++){ //inner loop is for printing *
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
