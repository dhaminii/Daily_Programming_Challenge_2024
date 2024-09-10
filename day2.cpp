#include <iostream>
using namespace std;

int findmissing(int a[],int n){
  int expsum=((n+1)*(n+2))/2;
  int actsum=0;
  for (int i=0;i<n;++i){
      actsum+=a[i];
  }
  return expsum-actsum;
}

int main(){
  int size;
  cin >> size;
  int arr[size];

  for (int i=0;i<size;i++){
    cin>>arr[i];
  }
  
  cout<<"\n"<<"Output"<<endl;
  cout<<findmissing(arr,size);
  
}
