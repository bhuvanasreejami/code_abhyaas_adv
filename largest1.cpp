#include<iostream>
using namespace std;
void largest(int arr[],int n){
    int temp;
    int i;
    for(i=0;i<n;i++){
        if(arr[i+1]>arr[i]){
            temp=arr[i+1];
            break;
        }
    }
    cout << "the largest element is:" << temp << endl;
    cout << "the index of the largest element is:"<< i+1;
}
int main(){
    int n,i;
    cout << "enter the size of the array:";
    cin >> n;
    int arr[n];
    cout << "enter numbers in to the array:";
    for(i=0;i<n;i++){
        cin >> arr[i];
    }
    largest(arr,n);
    return 0;
}