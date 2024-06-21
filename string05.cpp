//push and pop operation
#include<iostream>
using namespace std;
int main()
{
    string name="shivam";
    name.push_back('r');//isme ekk he element/character pass kar sakte hai
    cout<<name<<endl;

    name.pop_back();//ye last se element nikal dte h
    cout<<name<<endl;;

    name=name+"shivam";
    cout<<name<<endl;

}
