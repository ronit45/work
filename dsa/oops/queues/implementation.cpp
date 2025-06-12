#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
queue<int> a;
a.push(4);
a.push(5);
a.pop();
stack<int> b;
b.push(4);

cout<<b.size()<<endl;
cout<<a.front()<<endl;
return 0;
}