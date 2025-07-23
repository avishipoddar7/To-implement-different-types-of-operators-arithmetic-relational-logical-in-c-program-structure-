// exp 3 
// find positive and negative number 

#include <iostream>
using namespace std;

int main(){

    float num ;
    cout<<"Enter a number : ";
    cin>>num;

    if(num>0){
        cout<<"The number is negative."<<endl;
    }
    else if (num<0){
       cout<<"The number is positive."<<endl; 
    }
    else {
        cout<<"The number is 0."<<endl;
    }

    return 0 ;
}