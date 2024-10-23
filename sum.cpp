#include<iostream>
#include<array>

using namespace std;
array<int,70> aget (int n);
array<int,70> sum ( array<int,70> ict,array <int,70>  pf ,array <int,70> dld, int n);


int main()
{
      cout<<"enter the number of students you want to enter data for :";
    int n;
        cin>>n;
    cout<<"enter ICT marks : ";
    array<int,70> ict = aget(n);
 
    cout<<"enter PF marks : ";
    array<int,70> pf = aget(n);

    cout<<"enter DLD marks : ";
    array<int,70> dld=aget(n);
     
     array<int,70>s = sum(ict,pf,dld,n);
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
array<int,70> sum ( array<int,70> ict,array <int,70>  pf ,array <int,70> dld ,int n)
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
