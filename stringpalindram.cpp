//check string is palindram
#include<iostream>
using namespace std;
int main()
{
    string s="shivam";
    int start=0;
    int end=s.size()-1;
    while(start<end){
      if(s[start]==s[end]){
        cout<<" palindrom";
        return 0;
      }
      start++, end--;
    }
        cout<<"this is not palindrom"<<endl;

}
