#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            char a =('A'+row-1)
            cout<<a<<endl;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}
