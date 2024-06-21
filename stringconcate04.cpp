//string concanation
#include<iostream>
using namespace std;
int main()
{
    string fname;
    string lname;
cout<<"enter first name " << " ";
    getline(cin,fname);
    cout<<endl;
cout<<"enter first name " << " ";
    getline(cin,lname);
     cout<<endl;
    string totalname=fname+lname;//fname.append(lname)
    cout<<totalname<<endl;

}
