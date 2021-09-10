#include<bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll 			  long long int
#define lld      	long long double
#define si(x)	  	scanf("%I64d",&x)
#define sl(x)		  scanf("%lld",&x)
#define ss(x)		  scanf("%s",s)
#define pi(x)		  printf("%I64d\n",x)
#define pl(x)		  printf("%lld\n",x)
#define ps(s)		  printf("%s\n",s)
#define deb1(x)   cout<<#x<<"="<<x
#define deb2(x,y)	cout<<#x<<"="<<x<<","<<#y<<"="<<y<<"\n"
#define pb			  emplace_back
#define F 			  first
#define S			    second
#define pii			  pair<int,int>
#define pll			  pair<ll,ll>
#define vec			  vector<int,int>
#define PI        3.1415926535897932384626
using namespace std;
void solve(vector<int>&v,int k)
{ int count=0;	
  int n=v.size();
  unordered_map<int,int>mp;
  for(int i=0;i<v.size();i++){
    mp[v[i]]++;
  }
  for(auto it:mp){
    if(it.second>n/k){
      count++;
    }
  }
  cout<<count<<endl;
}


int main(){
  fastio();
  int size;
  cin>>size;
  vector<int>v(size);
  for(int i=0;i<size;i++) cin>>v[i];
    int k;
  cin>>k;
  solve(v,k);
}