#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
//creating the 2d vector

vector<vector<int>>matrix(3,vector<int>(4,2));

for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<matrix[i][j]<< " ";
    }
    cout<<endl;
}

}
