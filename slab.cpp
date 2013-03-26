#include<iostream>
using namespace std;
int main()
{
float fck, fy, xumax, b, d, mu , pt , ast ;
cout<<"enter the value for length and breadth";
cin>>b;
cin>>d;
cout<<"enter value of fy and fck";

cin>>fy;
cin>>fck;
cout<<"enter the value for xumax,ast";
cin>>xumax;
cin>>ast;
mu=0.87*fy*ast*(d-0.416 * xumax);
pt =(.4*fck * xumax )/(fy *d);
cout<<" c moment of beam"<< mu  <<"\n";
cout<<"percentage steel"<< pt <<"\n";
return 0;
}

