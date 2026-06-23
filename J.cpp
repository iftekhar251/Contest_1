#include<iostream>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int count=0;
      int arr[5]={100,20,10,5,1};
      for(int i=0;i<n;i++){
        count=count+(n/arr[i]);
        n=n%arr[i];
      }
      cout<<count;
    return 0;
}