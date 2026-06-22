#include<iostream>
using namespace std;
int main()
{
    int n,s;
    cin>>n>>s;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[s-1]){
            sum++;
        }
    }
    cout<<sum;
      
    return 0;
}