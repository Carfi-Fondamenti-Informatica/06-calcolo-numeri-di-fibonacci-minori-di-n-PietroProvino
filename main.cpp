#include <iostream>
using namespace std;


int main() {
    int n, a=1,b=1,c ;
    do{
        cin >> n;
    }while (n<2);
        for( int j=2; j<=n; j++){
            cout << a << endl;
            cout << b << endl;
            for( int i=2;i<j;i++){
                c=a+b;
                a=b;
                b=c;
                cout << c << endl;
            }
            a=1;
            b=1;
        }
    return 0;
}
