#include <bits/stdc++.h>
using namespace std;
#define ll long long

/*
 
                    AUTHOR        : NEEL SHETH
                                    AHMEDABAD UNIVERSITY

                    CODEFORCES    : neelxdxd
                    CODECHEF      : neelxdxd

*/

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1;
        cin>>s1;
        string s2;
        cin>>s2;
        map<char,int>m;
        for(int i=0;i<2;i++){
            m[s1[i]]++;
        }for(int i=0;i<2;i++){
            m[s2[i]]++;
        }vector<int>arr;
        for(auto it: m){
            arr.push_back(it.second);
        }int ans = arr.size();
        if(ans == 1){
            cout<<0<<endl;
        }else if(ans == 2){
            cout<<1<<endl;
        }else if(ans == 3){
            cout<<2<<endl;
        }else{
            cout<<3<<endl;
        }
    }
    return 0;
}