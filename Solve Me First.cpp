#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int formula(int a, int b){
return a+b;
}
int main(){
    int num1 , num2;
    int sum ;
    cin>>num1>>num2;
    sum = formula(num1,num2);
    cout<<sum;
    return 0;
}
