#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  //  sort(arr.begin(),arr.end());

    int a =count(arr.begin(),arr.end(),1);

   /* for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    */
    cout<<a<<endl;
}
