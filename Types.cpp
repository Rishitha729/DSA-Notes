
//Direct Recursion -function calls itself directly

#include <iostream>
using namespace std;

int factorial(int n){
  if(n==0)
    return 1;
  return n*factorial(n-1);
}

int main(){
  int n=3;
  factorial(n);
  cout<<"factorial ="<<factorial(n);
  return 0;
  
}




//Indirect Recursion-function calls another function like A function calls B function

#include <iostream>
using namespace std;

void funB(int n);

void funA(int n) {
    if(n > 0) {
        cout << "A" << n << " ";
        funB(n - 1);
    }
}

void funB(int n) {
    if(n > 0) {
        cout << "B" << n << " ";
        funA(n / 2);
    }
}

int main(){
  funA(3);
  return 0;
}




//Tail Recursion- REcursion statement laast la ostadi



#include <iostream>
using namespace std;

int fac(int n){
  if(n==0){
    return 1;
  }else if(n==1){
    return 1;
  }
  return n *fac(n-1);//recursive statement
}

int main(){
  int n=4;
  cout<< fac(n);
  return 0;
}



//Non-Tail Recursion-Recursive statement last loo raadu
//after the recursive call returns, some extra work (like addition, multiplication, printing, etc.) still remains.

#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 0) return 1;               // base case
    return n * factorial(n - 1);       // recursive call not last (multiplication after return)
}

int main() {
    int n = 5;
    cout << "Factorial = " << factorial(n);
    return 0;
}

//Nested loops


#include <iostream>
using namespace std;


int main()
{
  for(int i=0;i<=5;i++){
    for(int j=i+1;j<=6;j++){
      cout<<"Cheppandraa baabu"<<endl;
      cout<<"Moddalettandi saar"<<i<<endl;
      cout<<"Tagalettandi saar"<<j<<endl;
    }    
  }
  return 0;

}


