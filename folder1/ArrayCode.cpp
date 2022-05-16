#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Please enter the size of the array you want: ";

    cin>>size;
    cout<<endl;

    int arr[size];
    for (int i=0; i<size; i++){
        cout<<"Please enter the "<< i << " element in the array: ";
        cin>>arr[i];
    }
    cout<<endl;

    int search;
    cout<<"Please enter the number you want to search: ";
    cin>>search;
    for(int k=0; k<size; k++){
        if(arr[k] == search){
            cout<<"Yes, element is present at index " << k << endl;
            break;
        }
    }
        // cout<<"Element is not present";
    return 0;
}
