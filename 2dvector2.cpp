#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the row "<<endl;
    cin>>n;
    cout<<"enter the column " <<endl;
    cin>>m;
    vector<vector<int>>matrix(n,vector<int>(m,1));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    //printing the vector
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j];
        }
        cout<<endl;
    }
return 0;
}
