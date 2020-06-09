#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n1,n2,n3,i=1;
    int first,second,third;
    cin>>T;
    while(T--){
        cin>>n1>>n2>>n3;
        if(n1<n2){
            if(n1<n3){
                first=n1;
                if(n2<n3){
                    second=n2;
                    third=n3;
                }
                else{
                    second=n3;
                    third=n2;
                }
            }
            else{
                first=n3;
                second=n1;
                third=n2;
            }
        }
        else{
            if(n2<n3){
                first=n2;
                if(n1<n2){
                    second=n1;
                    third=n3;
                }
                else{
                    second=n3;
                    third=n1;
                }
            }
            else{
                first=n3;
                second=n2;
                third=n1;
            }
        }
        cout<<"Case "<<i<<": "<<first<<" "<<second<<" "<<third;
        i++;
    }
}
