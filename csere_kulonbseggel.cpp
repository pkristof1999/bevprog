#include "std_lib_facilities.h"

int main()
{
cout<<"Adon meg 2 számot: \n";
int a; //első szám
int b; //második szám

cin>>a>>b;

a = a+b;
b = a-b;
a = a-b;

cout<<"Csere után: "<<a<<","<<b<<"\n";
}



