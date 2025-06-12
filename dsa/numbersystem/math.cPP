#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n=5;
int i=0;
int answer = 0;
while(n!=0){
int bit = n&1;
answer = (bit*pow(10,i))+answer;
n>>1;
i++;
}
printf("%d",answer);
return 0;

}