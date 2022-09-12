#include <iostream>
using namespace std;

void counting (int num){
    for (int i=1;i<=num;i++){
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;

    counting(n);
    return 0;
}