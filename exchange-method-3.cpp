#include <iostream>

using namespace std;

int main(){float A,B,C,D,E,F,AX; //Variables are defined
{

//Entry of values
cout <<"Enter the 6 numbers"<<endl;
cin>>A>>B>>C>>D>>E>>F;

//Solution code
AX=A; //The value of AX becomes the value of A
A=F; //The value of A becomes the value of F
F=AX; //The value of F becomes the value of AX

//Results in console
cout<<"-----"<<endl;
cout<<A<<endl; //Change the value
cout<<B<<endl; //Stays the same
cout<<C<<endl; //Stays the same
cout<<D<<endl; //Stays the same
cout<<E<<endl; //Stays the same
cout<<F<<endl; //Change the value
cout<<"-----"<<endl;

return 0;

}
}
