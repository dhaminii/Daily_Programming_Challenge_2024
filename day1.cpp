#include <iostream>
using namespace std;
//algo used: dutch national flag algo
//using three pointers low, mid, high

void sortarr(int a[],int n){
  int l=0;
  int m=0;
  int h=n-1;
  
  while (m<=h){
      if (a[m]==0){
        swap(a[m],a[l]);
        l+=1;
        m+=1;
      }
      else if (a[m]==1){
        m+=1;
      }
      else{
        swap(a[m],a[h]);
        h-=1;
      }
    }
}

int main(){
  int size;
  cin >> size;
  int arr[size];

  for (int i=0;i<size;i++){
    cin>>arr[i];
  }
  sortarr(arr,size);
  cout<<"\n"<<"Output"<<endl;
  
  for (int i=0;i<size;i++){
    cout<<arr[i];
  }
  
}
