#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,a,b,k;
        cin>>n>>a>>b>>k;
        long long int count=0;
        count+=n/a;
        count+=n/b;
        long long int mul=(a*b);
        long long int divd=__gcd(a,b);
        long long int lcm=mul/divd;
        
        count-=(n/lcm);
        count-=(n/lcm);
        
        if(count>=k){
            cout<<"Win"<<endl;
        }else{
            cout<<"Lose"<<endl;
        }
        
    }
}
