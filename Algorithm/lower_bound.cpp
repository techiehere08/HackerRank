#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; cin>>n;
    vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];
    int q; cin>>q;
    while(q--)
    {
        int temp; cin>>temp;
        if(binary_search(v.begin(),v.end(),temp))
        {
            cout<<"Yes ";
        }
        else cout<<"No ";
        cout<<lower_bound(v.begin(),v.end(),temp)-v.begin()+1<<endl;
    }
    return 0;
}

