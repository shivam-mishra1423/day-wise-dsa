#include<iostream>
using namespace std;
int sum(int arr[],int n){
int sum=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
}
return sum;

}
int main(){
int arr[5]={1,2,3,4,5};
/*int sum=0;
for(int i=0;i<5;i++){
    sum=sum+arr[i];
}

cout<<sum;
*/
int ans=sum(arr,5);
cout<<ans<<endl;

}
