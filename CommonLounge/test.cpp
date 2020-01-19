#include <bits/stdc++.h>
using namespace std;

#define TC()        int t;cin>>t;while(t--)
#define DB(x)       cout<<"\n"<<#x<<" = "<<(x)<<"\n";
#define DB2(x,y)     cout<<"\n"<<#x<<" = "<<(x)<<" "<<#y<<" = "<<(y)<<"\n";
#define CL(a,b)     memset(a,b,sizeof(a))
#define endl        '\n'
#define INF         1000000000000000000LL
#define MOD         1000000007
#define SIZE            100001

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;

int main(){
    ios_base::sync_with_stdio(false);
    TC(){
        string s;
        vector<char> p;
        cin >> s;
        if(s.size() == 2){
            if(s[0] > s[1])
                cout << s[1];
            else
                cout << s[0];
            cout << endl;
            continue;
        }
        int l = s.size(), k=0;
        bool flag = false;
        for(int i = 0; i < l-1; i++){
            if(!flag && s[i] > s[i+1]){
                flag = true;
                continue;
            }
            else{
                p.push_back(s[i]);
                // cout << s[i];
            }
        }
        int i = 0;
        while(p[i] == '0')
            i++;
        bool ok = false;
        if(!flag){
            for(; i < l-1; i++)
                cout << p[i];
            ok = true;
        }
        else{
            p.push_back(s[l-1]);
            for(; i < l-1; i++)
                cout << p[i];
            ok = true;
        }
        // if(!ok)
        cout << endl;
    }
    return 0;
}
