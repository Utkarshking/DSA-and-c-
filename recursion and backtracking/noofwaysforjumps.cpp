#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll 			long long int
#define lld         long long double
#define si(x)	    scanf("%I64d",&x)
#define sl(x)		scanf("%lld",&x)
#define ss(x)		scanf("%s",s)
#define pi(x)		printf("%I64d\n",x)
#define pl(x)		printf("%lld\n",x)
#define ps(s)		printf("%s\n",s)
#define deb1(x)    	cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			emplace_back
#define F 			first
#define S			second
#define pii			pair<int,int>
#define pll			pair<ll,ll>
#define vec			vector<int,int>
#define PI          3.1415926535897932384626
using namespace std;
#include<iostream>
using namespace std;
int numofjumps(int n){
  if(n<0)
  return 0;
  if(n==0||n==1)
    return 1;
  else{
    return numofjumps(n-1)+numofjumps(n-2)+numofjumps(n-3);
  }
}
int main(){
  fastio();
  int n;
  cin>>n;
  cout<<numofjumps(n);
  return 0;
}