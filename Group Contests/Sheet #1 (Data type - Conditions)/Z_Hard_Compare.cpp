#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    double a,b,c,d;

    cin>>a>>b>>c>>d;

    

    double firstTwo=b*log(a);
    double secondTwo=d*log(c);
    

    if(firstTwo==secondTwo){
        cout<<"NO"<<endl;
    }
    else if(firstTwo>secondTwo){

        cout<<"YES"<<endl;
    }

    else if(firstTwo<secondTwo){
        cout<<"NO"<<endl;
    }

    return 0;
}