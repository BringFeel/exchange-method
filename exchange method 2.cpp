#include <iostream>

using namespace std;

int main(){float A,B,C,D,E,F,AX; //Variables are defined
{

//Entry of values
cout <<"Enter the 6 numbers"<<endl;
cin>>A>>B>>C>>D>>E>>F;

//Solution code
AX=A; //AX takes the value of A
A=D; //A takes the value of D before being changed (used as an auxiliary)
B=A; //B takes the value of A
C=B; //C takes the value of B
D=AX; //D takes the value of AX
E=D; //E takes the value of D
F=E; //F takes the value of E

//Results in console
cout<<"-----"<<endl;
cout<<A<<endl;
cout<<B<<endl;
cout<<C<<endl;
cout<<D<<endl;
cout<<E<<endl;
cout<<F<<endl;
cout<<"-----"<<endl;

return 0;

}
}