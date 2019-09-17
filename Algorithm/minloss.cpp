#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define EB emplace_back
#define MOD 1000000007
#define MP make_pair
#define F first
#define S second
#define vci vector<int> 
 
 
using namespace std;
 
#define loop(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
 
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
 
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
cerr << *it << " = " << a << endl;
err(++it, args...);
}        
 
// bool isPrime(int n) 
// { 
//     if (n <= 1)  return false; 
   
//     for (int i=2; i<n; i++) 
//         if (n%i == 0) 
//             return false; 
  
//     return true; 
// } 
 
// int arrsum(int *arr, int n)
// {
//     int sum=0;
//     loop(i,0,n)
//         sum+=arr[i];
//     return sum;    
// }
 
 
 int func(int x){
    int ret=0;
    while(x % 3 == 0){
    ret++;
    x /= 3;
    }
    return ret;
    }
    
 
 map<int,int>mp;
 void arrread(int *arr, int n) { loop(i,0,n) {cin>>arr[i]; mp[arr[i]]=i; } }
 
int32_t main()

{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // #ifndef ONLINE_JUDGE
    
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // freopen("error.txt","w",stderr);
      
  //  #endif
    ////-------------------------------------------------------------------////
    
    

    int tt=1;
    //cin>>tt;
    while(tt--)
    {
         int n; cin>>n;

        // int x,y; cin>>x>>y;
        // //int m; cin>>m;
         int arr[n]; arrread(arr,n);
        //int brr[m]; arrread(brr,m);
        sort(arr,arr+n,greater<>());
        int diff=INT_MAX;
        loop(i,0,n-1) if(diff>arr[i]-arr[i+1] and mp[arr[i]]<mp[arr[i+1]]) diff=arr[i]-arr[i+1];
        cout<<diff<<endl;

        
    }
        
    ////------------------------------------------------------------------////
    // #ifndef ONLINE_JUDGE    
    // cout<<endl;
    
    //#endif
    return 0;
}    

