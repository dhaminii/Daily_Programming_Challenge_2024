#include <iostream>
using namespace std;

int finddupe(int a[],int n){
  int expsum=((n)*(n-1))/2;
  int actsum=0;
  for (int i=0;i<n;++i){
      actsum+=a[i];
  }
  return actsum-expsum;
}

int main(){
  int size;
  cin >> size;
  int arr[size];

  for (int i=0;i<size;i++){
    cin>>arr[i];
  }
  
  cout<<"\n"<<"Output"<<endl;
  cout<<finddupe(arr,size);
  
}
