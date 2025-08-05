#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){

    int arr[3];
    int ar[3];
    int alice =0;
    int bob =0;
    for(int i =0 ;i<3;i++){
        cin>>arr[i];}
    for(int i=0; i<3;i++){
        cin>>ar[i];}
    for(int i= 0;i<3;i++){
    if(arr[i]>ar[i]){
            alice++;}
    if(arr[i]<ar[i]){
            bob++;
        }
    
}
cout<<alice<<" "<<bob;
}
