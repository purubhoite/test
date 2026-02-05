#include <iostream>
using namespace std;

int sub(int a,int b){
  return a-b;
}

int main() {
int a,b;
cout<<"Subtraction Program"<<endl;
cout<<"Enter first no - ";
cin>>a;
cout<<"Enter second no - ";
cin>>b;
cout<<"Result - "<<sub(a,b);
return 0;
}
