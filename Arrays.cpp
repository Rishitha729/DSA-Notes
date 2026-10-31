//arrays-collections of items


//Priting an array -1D
#include <iostream>
using namespace std;

int main() 
{
  int arr[5] ={2,5,7,9,0};
  cout<<"Elements of this array is: ";
  for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}

//2D Array-Printing an array
//arr[rows][columns]
#include <iostream>
using namespace std;

int main() 
{
  int arr[4][5]={
    {1,2,3,4,5},
    {2,3,4,5,6},
    {3,4,5,6,7},
    {4,5,6,7,8}
  };
  
  cout<<"Elements of this array is: "<<endl;
  for(int i=0;i<5;i++){//rows
    for(int j=0;j<4;j++){//columns
      cout<<arr[i][j]<<"  ";
    }
    cout<<endl;//next row
  }
  return 0;
}


//Deleting an array at the beginning
#include <iostream>
using namespace std;

int main(){
  int n=5;
  
  int arr[5]={0,1,2,3,4};
  
  cout<<"Enter the given array:"<<" ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<endl;
  //deleting the element at begining
  for(int i=0;i<n-1;i++){//this loop is to shift the elements
    arr[i]=arr[i+1];
  }
  n--;
  
  cout<<"Array after deletion:"<<" ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<endl;
  return 0;
  
}

//deleting an element at the end

#include <iostream>
using namespace std;

int main(){
  int n=5;
  
  int arr[5]={0,1,2,3,4};
  
  cout<<"Enter the given array:"<<" ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<endl;
  
  n--;//no shifting needed as the last element will be deleted
  
  
  cout<<"Array after deletion:"<<" ";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  cout<<endl;
  return 0;
  
}