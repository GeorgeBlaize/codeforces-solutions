#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long long n,m;

    cin>>n>>m;

    int lastDigitN,lastDigitM;

    lastDigitN=n%10;
    
    lastDigitM=m%10;

    cout<<lastDigitN+lastDigitM<<endl;


    return 0;
}