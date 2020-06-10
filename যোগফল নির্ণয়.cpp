#include<bits/stdc++.h>
using namespace std;
int first_d(int n){
    while(n>=10){
        n=n/10;
    }
    return n;
}
int last_d(int n){
    return (n%10);
}
int main()
{
    int sum,T;
    int num;
    cin>>T;
    while(T--){
        cin>>num;
        sum=first_d(num)+last_d(num);
        cout<<"Sum = "<<sum<<endl;
    }
    
}