#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    long long a,b;

    char s;

    cin>>a>>s>>b;

    if(s=='>'){

        if(a>b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }

       if(s=='<'){

        if(a<b){
            cout<<"Right"<<endl;
        }
        else{
            cout<<"Wrong"<<endl;
        }
    }
    

    if(s=='='){

       if(a==b){
        cout<<"Right"<<endl;
      }
      else{
        cout<<"Wrong"<<endl;
      }

    }
   



    return 0;
}