#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    int n ;
    cin>>n;
    int lr =0;
    int rl=0;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j= 0;j<n;j++){
            cin>>arr[i][j];
        }
        rl=rl+arr[i][i];
        lr=lr+arr[i][n-1-i];
    }
cout<<abs(rl-lr);
}
