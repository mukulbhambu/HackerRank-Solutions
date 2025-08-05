#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);
int main(){
    int n;
    cin>>n;
    long sum =0;
    long ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];

        sum += ar[i];
    }
    cout<<sum;
}
