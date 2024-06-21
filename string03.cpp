#include<iostream>
using namespace std;
int main()
{
    string name;
    getline(cin,name);
    cout<<name<<endl;
    cout<<name.size();//include space  ye null character ka nhi karta
}
