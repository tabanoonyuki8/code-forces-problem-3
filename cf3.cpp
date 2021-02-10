//Codeforces problem
//A. Team

#include<iostream>
#include<string>
 using namespace std;

 int main(){

int i,n,a,b,c,flag=0;
cin>>n;
for(i=0; i<n; i++){

    cin>>a>>b>>c;
   if(a+b+c>=2){
    flag++;
   }
}
 cout<<flag<<endl;



 return 0;
 }

