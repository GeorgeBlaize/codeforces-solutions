#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    double n;

    cin>>n;

    int intPart=int(n);

    double fracPart=n-intPart;

    if(fracPart==0){
        cout<<"int"<<" "<<intPart<<endl;
    }
    else{
        cout<<"float"<<" "<<intPart<<" "<<fracPart<<endl;
    }
    return 0;
}