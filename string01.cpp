//string 01   ip v4 leetcode problem
#include<iostream>
using namespace std;
int main()
{
    string address="1.1.1.1";
    int index=0;
    string ans;
    while(index<address.size()){
        if(address[index]=='0'){
            ans=ans+"[.]";
            index++;
        }
            else{
                ans=ans+address[index];
                index++;
            }
        }

    cout<<ans;


}
