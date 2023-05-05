#include <iostream>
using namespace std;

int main() {
    int a=0,b=1,n=0;
    cin>>n;
    if(n>=1){
        cout<<b<<endl;
        while(true){
            if((a+b)<=n){
                cout<<a+b<<endl;
                if(a<b){a+=b;}
                else{b+=a;}
            }else{break;}  	
        }
    }
    return 0;
}
