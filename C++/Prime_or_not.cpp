#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=2;
    while(i<n){
        if (n%2==0){
            cout<<"Not prime"<<endl;
        }
        i=i+1;
        if(n%2!=0)
        {
            cout<<"Prime"<<endl;
        }
    }
}