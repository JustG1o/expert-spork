#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    int a,b,c,d,e,f;
    
    cout <<"please input your money in tetri"<<endl;
    cin>>a;
    
    b=a/50;
    c=a%50/20;
    d=a%50%20/10;
    e=a%50%20%10/5;
    f=a%50%20%10%5;
    
    cout<<fixed<<setprecision(0)<<b<<"cali 50 tetriani"<<endl;
    cout<<fixed<<setprecision(0)<<c<<"cali 20 tetriani"<<endl;
    cout<<fixed<<setprecision(0)<<d<<"cali 10 tetriani"<<endl;
    cout<<fixed<<setprecision(0)<<e<<"cali 5 tetriani"<<endl;
    cout<<fixed<<setprecision(0)<<f<<"cali 1 tetriani"<<endl;
    
    
    return 0;
}



