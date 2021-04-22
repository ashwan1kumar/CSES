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
        int sum = (n*(n+1))/2;
        if(sum%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int a = 0,b = 0;
            vi s1,s2;
            for(int i=n;i>=1;i--)
            {
                if(a<=b)
                {
                    a+=i;
                    s1.pb(i);
                }
                else
                {
                    b+=i;
                    s2.pb(i);
                }
            }
            cout<<s1.size()<<endl;
            for(auto x:s1)
            {
                cout<<x<<" ";
            }
            cout<<endl;
            cout<<s2.size()<<endl;;
            for(auto x:s2)
            {
                cout<<x<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}