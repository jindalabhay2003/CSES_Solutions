#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repl(i,a,b) for(ll int i=a;i<b;i++)
#define vil vector<ll int>
#define vvil vector<vector<ll int>>
#define pil pair<ll int,ll int>
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define debug(n) cout << #n << " : " << n << "\n"; 
#define debug2(n1,n2) cout << #n1 << " : " << n1 << "  " << #n2 << " : " << n2 << "\n";
#define endl "\n"
#define sp " "
const ll int MOD = 1e9+7;
#define fastInOut ios_base::sync_with_stdio(false);cin.tie(NULL);

//-------- Policy Based Data Structures------

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;

// template<class T>using oset = tree<T, null_type,less<T>,rb_tree_tag, tree_order_statistics_node_update>;


// operator overloading

template<typename T1,typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream>> p.first >> p.second); }

template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream,vector<T> &v)
{
    for(auto &it: v){
        cin>>it;
    }
    return istream;
}

template<typename T1,typename T2> // cout << pair<T1, T2>
ostream& operator<<(ostream &ostream, pair<T1, T2> &p) { return (ostream<< p.first<< " " << p.second); }

template<typename T> // cout << vector<T>
ostream& operator<<(ostream &ostream,vector<T> &v)
{
    for(auto &it: v){
        cout<<it<<" ";
    }
    return ostream;
}

vector<ll int>fact;

void sieve(ll int size){
    fact.resize(size);
    for(ll int i=0;i<size;i++){
        fact[i] = i;
    }

    for(ll int i=2;i<size;i++){
        if(fact[i] == i){
            for(ll int j=i*i;j<size;j+=i){
                fact[j] = min(fact[j],i);
            }
        }
    }
}

ll int modpow(ll int a,ll int b,ll int m = MOD){
    if(a==0 && b==0){return 0;}
    ll int res = 1;a %= m;
    while(b>0){if(b&1){res= (res*a)%m;}a=(a*a)%m;b >>=1;}return res;
}

ll int modinv(ll int n,ll int m=MOD){return modpow(n,m-2,m);}
ll int toint(char c){return (c-'0');}

ll int computeXOR(ll int n) 
{ 
    
  // If n is a multiple of 4 
  if (n % 4 == 0) 
    return n; 
  
  // If n%4 gives remainder 1 
  if (n % 4 == 1) 
    return 1; 
  
  // If n%4 gives remainder 2 
  if (n % 4 == 2) 
    return n + 1; 
  
  // If n%4 gives remainder 3 
  return 0; 
} 

void solve(){

    ll int n;
    cin>>n;

    ll int xorr = computeXOR(n);

    for(ll int i=0;i<n-1;i++){
        ll int a;
        cin>>a;
        xorr = (xorr xor a);
    }

    cout<<xorr<<endl;

}

int main(){
    fastInOut
    cout<<setprecision(12)<<fixed;

    ll int t = 1;
    // cin>>t;

    for(ll int i=0;i<t;i++){
        solve();
    }

    
    return 0;
}