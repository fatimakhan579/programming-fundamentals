#include<iostream>
#include<array>

using namespace std;
array<int,70> aget (int n);
array<int,70> sum ( array<int,70> v,array <int,70>  f ,array <int,70> g, int n);


int main()
{
      cout<<"enter the number of students you want to enter data for :";
    int n;
        cin>>n;
    cout<<"enter ict marks : ";
    array<int,70> v = aget(n);
 
    cout<<"enter pf marks : ";
    array<int,70> f = aget(n);

    cout<<"enter dld marks : ";
    array<int,70> g=aget(n);
     
     array<int,70>s = sum(v,f,g,n);
     cout<<"The total marks of students are "<<endl;

     int i = 0;
    while (i < n) {
        cout <<" student  "<<(i +1)<<" total marks are "<< s[i] <<endl;
        i++;
    } 
     cout<<endl;
      return 0;
}
  
   array <int,70> aget (int n)

{
    array <int,70> a;
    int i=0;
    while(i<n)
    {
        cin>>a[i];
        i=i+1;
    }
    return a;
}
array<int,70> sum ( array<int,70> v,array <int,70>  f ,array <int,70> g ,int n)
{
    array<int,70> sum;
    int i=0;
    while(i<n)
    {
        sum[i]=v[i]+f[i]+g[i];
        i++;
    }
    return sum;
}
