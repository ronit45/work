#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a = 5;
    double b =19.99;
    char c = 'a';
    string d= "Ronit";
    bool e = true;
    cout<<a;
    string f ="bando";
    string full = d+" "+f;
    cout<<full;
    cout<<"\n";
    string full1 = d.append(f);
    cout<< full1<<full1.length();
    cout<<full[0];
    cout<<max(78,79)<<"\n";
    cout<<sqrt(64)<<"\n";
    cout<<round(8.4)<<"\n";
    cout<<log(2.4)<<"\n";
    cout<<"boolean "<<(10>11);



}