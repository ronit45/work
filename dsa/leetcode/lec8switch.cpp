#include<iostream>
using namespace std;
int main(){
    int amount =1550;
    int n1,n20,n100,n500;
    switch(amount >= 500){
       case 1: n500= amount/500;
        amount -= n500*500;
        break;
    }
    switch(amount>=100){
        case 1: n100 = amount/100;
        amount -= n100*100;
        break;
    }
    switch(amount>=20){
        case 1: n20 = amount/20;
        amount -= n20*20;
        break;
    }
    switch(amount>=1){
        case 1: n1 = amount/1;
        amount -= n1*1;
        break;
    }
    cout<<"500 notes = "<<n500;
    cout<<"\n100 notes ="<<n100;
    cout<<"\n20 notes  ="<<n20;
    cout<<"\n1 notes   ="<<n1;

}