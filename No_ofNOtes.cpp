#include<iostream>
using namespace std;

int main(){

    int n, h, f, tw, one;

    cout<<"Enter the Rupee"<<endl;
    cin>>n;

    switch (1)

    {
    case 1 : h=n/100;
            n=n-(100*h);
            cout<<"The 100 rupee notes are-"<<h<<endl;
    case 2 : f=n/500;
            n=n-(50*f);
            cout<<"The 50 rupee notes are-"<<f<<endl;   
    case 3 : tw=n/20;
            n=n-(20*tw);
            cout<<"The 200 rupee notes are-"<<tw<<endl;   
    case 4 : one=n/1;
            n=n-(1*one);
            cout<<"The 1 rupee notes are-"<<one<<endl;  

        
    default:
        break;
    }
}