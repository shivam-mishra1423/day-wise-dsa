#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //creating the 2d vector
    vector<vector<int>>matrix(3,vector<int>(4,0));//3 row 4 col ind initilised with 0;
   for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    cout<<"Rows = "<<matrix.size();
    cout<<endl;
    cout<<"cols = "<<matrix[0].size()<<endl;

}
