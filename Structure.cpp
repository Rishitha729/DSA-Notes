#include <iostream>
using namespace std;

void Rishi(int n)
{
    if(n==0)//base case
        return;
    cout<<n<<" ";//recursion statement
    Rishi(n-1);//recursion call
}
int main(){
    int n=8;
    Rishi(n); //function call
    return 0;
}