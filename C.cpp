#include<bits/stdc++.h>
using namespace std;

int t;
int main(){
    cin>>t;
    for (int i=0; i < t; i++) {
        
        int m=0,tot=0;
        int v[3]={0,0,0};
        
        for (int j=0;j < 3; j++)cin>>v[j];
        
        cin>>m;
        sort(v, v + 3);
        tot=(v[0]-1)+(v[1]-1)+(v[2]-1);
        
        if(tot < m)cout<<"NO"<<endl;
        
        else{
           int a=v[0],b=v[1],c=v[2];
           
           if((a+b)>=c-1 )cout<<"YES"<<endl; 
           
           else{
               
            int x=c-(a+b+1);
            if(x<=0 or x<=m)cout<<"YES"<<endl;
            
            else cout<<"NO"<<endl;
           }
        }
    }
 
}