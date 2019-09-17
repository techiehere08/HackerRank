#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
int n; cin>>n;
map<string,int> mp;
while(n--)
{
    int x; cin>>x;
    string str; cin>>str;
    if(x==1)
    {
        int y; cin>>y;
        mp[str]+=y;

    }
    else if(x==2)
    {
        mp[str]=0;
    }
    else
    {
        
        cout<<mp[str]<<endl;
    }
}    return 0;
}




