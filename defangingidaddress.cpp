//defanging an ip address
#include<iostream>
using namespace std;
int main()
{
    string s="1.1.1.1";
    int index=0;
    string ans;
    int end=s.size()-1;
    while(index<end){
        if(s[index]=='.'){
            ans=ans+"[.]";
        }
        else{
            ans=ans+s[index];
        }
    }
    cout<<ans<<endl;
}
