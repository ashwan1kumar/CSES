#include<bits/stdc++.h>
using namespace std;

#define int                                          int64_t
#define mp                                           make_pair
#define pb                                           push_back
#define mod                                          1000000007
#define inf                                          1e18 
#define N 20000007
#define vi                                           vector<int>
#define pii                                          pair<int,int>
#define vpii                                         vector<pair<int,int>>
int arr[N];


void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}
int binexpo(int x,int y)
{
    int res = 1;
    while(y>0)
    {
        if(y&1)
        {
            res = (res*x)%mod;
        }
        x = (x*x)%mod;
        y>>=1;
    }
    return res;
}
int32_t main()
{
    init();
    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        // Since 2^n can be quite big we would do modular exponentiation
        cout<<binexpo(2,n)%mod<<endl;
    }
    return 0;
}