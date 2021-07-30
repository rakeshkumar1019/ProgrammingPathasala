#include<bits/stdc++.h>
#include<iostream>
using namespace std;
long long int gcd(long long int a,long long int b){
    long long int maxm=max(a,b);
    long long int minm=min(a,b);
    if(minm==0)return maxm;
    while(maxm%minm!=0){
        long long int temp=maxm;
        maxm=minm;
        minm=temp%minm;
    }
    return minm;
}
long long int lcm(long long int a,long long int b){
		//or res=(a/gcd(a,b))*b
    long long int mul= (a*b);
		long long int div=gcd(a,b);
		long long int res=mul/div;
		return res;
}
int main(){
    long long int a,b;
    cin>>a>>b;
    long long int x=gcd(a,b);
    long long int y=lcm(a,b);
    cout<<x<<" "<<y<<endl;
}
