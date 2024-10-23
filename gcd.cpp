#include<iostream>

using namespace std;

int gcd(int a,int b)
{
    int g ;
    int i = 1 ;
    while(i <= b && i<=a )
    {
        if( a % i == 0 && b %i ==0 )
        {
            g = i ;
        }
        i=i+1;
    }
      return g;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers to get GCD : ";
    cin>>a;
    cin>>b;
    cout<<"GCD of "<<a<<" and "<<b<<"  is"<<" "<<gcd(a,b);
    return 0;
}