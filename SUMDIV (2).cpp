#include<iostream>
using namespace std;
#include<math.h>
main() {
unsigned int n;
cin>>n;
while(n-->0){
unsigned long long x;
cin>>x;
if(x==1) cout<<1<<endl;
else {
unsigned long long s=0;
for(int i=1;i<sqrt(x);i++) {
if(x%i==0) s+=i+x/i;
}
if(sqrt(x)==(int)sqrt(x)) s+=(int)sqrt(x);
cout<<s;
cout<<endl;
}
}
}