#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(6);
    v.push_back(5);
  cout<<"size"<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }

}
