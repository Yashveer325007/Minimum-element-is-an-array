#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={};
    int ans=INT_MAX;
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        if(arr[i]<ans){
            ans=arr[i];
        }
    }
    cout<<"Minimum element in array is "<<ans<<endl;
    return 0;
}
