#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int n;

    cin>>n;

    int years=n/365;

    int remainder=n%365;

    int months=remainder/30;

    int days=remainder%30;



    cout<<years<<" "<<"years"<<endl;

    cout<<months<<" "<<"months"<<endl;

    cout<<days<<" "<<"days"<<endl;

    return 0;
}