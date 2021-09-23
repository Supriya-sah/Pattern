#include<iostream>
using namespace std;
int main(){
    char i=0;
    char j=0;
    for(char  i='A';i<='E';i++){
        for(int j='A';j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}