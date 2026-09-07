#include <iostream>
using namespace std;
void read(int arr[],int &n){
    cout<<"Enter the number of elements:"<<endl;
    cin>>n;
    cout<<"Enter array elements:"<<endl;
     for (int i=0; i<n; i++){
        cin>>arr[i];
    }
}
void Display(int arr[],int n){
    for (int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
void swap(int*a,int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void BubbleSort(int arr[],int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                
            }
        }
        
        
    }
}
int main() {
    int arr[100];
    int n;

    read(arr, n);

    cout << "\nBefore sorting:\n";
    Display(arr, n);

    BubbleSort(arr, n);

    cout << "\nAfter sorting:\n";
    Display(arr, n);

    return 0;
}