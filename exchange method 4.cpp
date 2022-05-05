#include <iostream>

using namespace std;

int main(){float A,B,C,D,E,F,AX; //Variables are defined
{

//Entry of values
cout <<"Enter the 6 numbers"<<endl;
cin>>A>>B>>C>>D>>E>>F;

//Solution code
AX=A; //AX takes the value of A
A=F; //A takes the value of F
F=AX; //F takes the value of AX
AX=B; //AX takes the value of B
B=E; //B takes the value of E
E=AX; //E takes the value of AX
AX=C; //AX takes the value of C
C=D; //C takes the value of D
D=AX; //D takes the value of AX

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