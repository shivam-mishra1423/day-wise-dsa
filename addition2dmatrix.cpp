//print the 2d array
#include<iostream>
using namespace std;
int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,1,2,3};
    int arr2[4][3]={1,2,3,4,5,6,7,8,9,1,2,3};
    int sum[4][3];
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=arr[i][j]+arr2[i][j];
        }
    }
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<< "   ";
        }
        cout<<endl;
    }
}
