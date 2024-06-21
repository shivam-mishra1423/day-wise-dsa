//printing the 2d array with function
#include<iostream>
using namespace std;
void printarr(int arr[][3],int row,int col){
for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<<arr[i][j];
    }
    cout<<endl;
}


}
int main()
{
    int row=4;
    int col=3;
    int arr[4][3];
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    printarr(arr,4,3);
}
