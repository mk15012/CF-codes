
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define c(P)        cout<<P<<"\n"
#define dbg(P)      cout<<P<<" "
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,x,n)   for(ll i=x;i<n;i++)
#define frr(i,x,n)  for(ll i=n-1;i>=x;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;


void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  if(n%2==0)
  {
    c("NO");
    return;
  }
  c("YES");
  if(n==1)
  {
    c("1 2\n");
    return;
  }
std::vector<ll> a;
  a.pb(1);
  mi mp;
  mp[1]= 1;
  mp[4] = 1;
  a.pb(4);
   for (ll i = 2; i < 2*n; ++i) 
  {

   if(a[i-2]+4>2*n)
   break;

   a.pb(a[i-2]+4);  
   mp[a.back()] =1;
  }
  for (ll i = 2; i <= 2*n; ++i)
  {
     if(mp.count(i)>0)
      continue;
    a.pb(i);
  }
  for (int i = 0; i < a.size(); ++i)
  {
   cout<<a[i]<<" ";
  }

}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      //cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }