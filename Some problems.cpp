//Factorial problemm


#include <iostream>
using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }else{
    return n*factorial(n-1);
  }
}

int main(){
  int n=5;
  cout<<"Factorial: "<<factorial(n);
  return 0;
}


//fibonocci series


#include <iostream>
using namespace std;

int fibonocci(int n){
  if(n==0)
    return 0;
  else if(n==1)
    return 1;
  else
    return fibonocci(n-1)+fibonocci(n-2);
}
int main(){
  int n;
  cout<<fibonocci(10);
  return 0;
}

