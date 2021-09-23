#include<iostream>
using namespace std;
int main(){
    char i=0;
    char j=0;
    for(char i='E';i>='A';i--){
        for(char j='E';j>='A';j--){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}