#include<iostream>
using namespace std;
int main()
{
    /*int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    */
    int row;
    cout<<"enter the value of a(row) "<<endl;
    cin>>row;
    int col;
    cout<<"enter the value of b(col)"<<endl;
    cin>>col;
    int arr[a][b];
    //taking the input in the array
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[row][col];
        }
    }
    //printing the element
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[row][col];
        }
        cout<<endl;
    }
}
