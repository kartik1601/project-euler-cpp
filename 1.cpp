/* MULTIPLES OF 3 or 5*/
#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi  vector<int>
#define vii vector<vector<int>>
#define vpi vector<vector<pair<int,int>>>
#define mii unordered_map<int,int>
#define mci unordered_map<char,int>
#define pii pair<int,int>
#define pci pair<char,int>

int32_t main(){
    int t=1;
    // cin >> t;

    while(t--){
        int n;
        cin >> n;
        int sum=0;
        for(int i=1 ; i<n ; i++){
            if(i%3==0 || i%5==0){
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}