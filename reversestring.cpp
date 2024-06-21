//string reverse
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s="shivam";
   int start=0;
   int end=s.size()-1;
   while(start<end){
    swap(s[start],s[end]);
    start++,end--;
   }
   cout<<s<<endl;

