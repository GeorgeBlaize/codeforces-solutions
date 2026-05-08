#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long long x;

    cin>>x;

    int firstDigit;

    firstDigit=x/1000;

    if(firstDigit%2==0){
        cout<<"EVEN"<<endl;
    }
    else{

        cout<<"ODD"<<endl;
    }
    

    
    return 0;
}