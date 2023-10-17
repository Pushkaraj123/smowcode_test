#include<bits/stdc++.h>
using namespace std;


int main(){
    int h,u,s;
    cin>>h>>u>>s;
    int diff= u-s;
    int hour = 0;
    while(h){
        if(h-u<=0){
            h-=u;
            hour++;
        }else{
            h-=diff;
            hour++;
        }
    }
    cout<<hour<<endl;
}
