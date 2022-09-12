#include<iostream>
using namespace std;

void printarray(int arr[], int n){
    for(int i=0; i<1; i++){
        cout<<arr[]<<" "<<endl;
    }
}

void swapAlternate(int arr[], int size){
    for (int i =0; i<size; i+=2);{
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int even[8]={5,2,9,6,5,6,8,4};
    int odd[5]={11,33,9,76,46};



    return 0;
}