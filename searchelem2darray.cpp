//search the element in 2d array
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    //taking the input in the array
    cout<<"enter the element "<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

        int key;
        cout<<"enter the searching element"<<endl;
        cin>>key;
    //printing the element
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key){
                cout<<"yes element is present "<<"index "<<endl;
                return 0;
            }

            else{
                cout<<"not found "<<endl;
            }
        }

     }
}

