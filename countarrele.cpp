#include<iostream>
using namespace std;
int main()
{
    int count1=0;
    int n;
    cout<<"enter the array element"<<endl;
    cin>>n;
    int arr[n];
    //takin input in the array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int start=0;
    int end=n;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count1++;
        }
    }
    cout<<"total number of one are "<<count1<<endl;
    return 0;
}
