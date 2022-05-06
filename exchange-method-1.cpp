#include <iostream>

using namespace std;

int main(){float A,B,C,D,E,F,AX; //Variables are defined
{

//Entry of values
cout <<"Enter the 6 numbers"<<endl;
cin>>A>>B>>C>>D>>E>>F;

//Solution code
AX=E; //The value of AX becomes the value of E
E=B; //The value of E becomes the value of B
B=AX; //The value of B becomes the value of AX

//Results in console
cout<<"-----"<<endl;
cout<<A<<endl; //Stays the same
cout<<B<<endl; //Change the value
cout<<C<<endl; //Stays the same
cout<<D<<endl; //Stays the same
cout<<E<<endl; //Change the value
cout<<F<<endl; //Stays the same
cout<<"-----"<<endl;

return 0;

}
}
