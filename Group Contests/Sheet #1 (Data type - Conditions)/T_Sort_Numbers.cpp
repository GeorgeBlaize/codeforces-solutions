#include<bits/stdc++.h>
using namespace std;
int main()
{
    

    long long a,b,c;

    cin>>a>>b>>c;

    vector<int> v={a,b,c};

    sort(v.begin(),v.end());

    for(int s:v){

        cout<<s<<endl;
    }

    cout<<endl;


    cout<<a<<endl<<b<<endl<<c<<endl;




    return 0;
}