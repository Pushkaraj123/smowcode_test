#include<bits/stdc++.h>
using namespace std;

int sortarray(int *binary ,int n){
    int i =0;
    int j=n-1;
    int count=0;
    while(i<=j){
        if(binary[i]==1){
            swap(binary[i],binary[j]);
            j--;
            if()
            count++;
        }else{
            i++;
        }

    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int binary[n];
    for(int i=0;i<n;i++){
        cin>>binary[i];
    }
    
    int ans = sortarray(binary,n); 
    cout<<ans<<endl;
}
