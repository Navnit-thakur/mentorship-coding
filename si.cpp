#include <bits/stdc++.h>
#include <math>
using namespace std;
int main()
{
float p,r,t,n;
float si,cm;
cout<<"enter no";
cin >>p>>r>>t>>n;
si=(p*r*t)/100;
cm= p*pow((1+r/n),t);
cout<<si<<endl;
return 0;
}
