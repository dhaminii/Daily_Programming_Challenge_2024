#include <iostream>
using namespace std;

int mergeandsort(int a[],int b[],int m,int n){
    int p=m+n;
    int p1,p2;
    p1=0;
    p2=m;
    int c[p];
    for (int i=0;i<m;i++){
        c[i]=a[i];
    }
    int i=m;
    for (int j=0;j<n;j++){
        c[i]=b[j];
        i+=1;
    }
    while (p1!=p && p2!=p){
        if (p1==p2!=p){
            p2+=1;
        }
        else if (c[p1]<c[p2]){
            p1+=1;
        }
        else{
            int t=c[p2];
            int tp=p2;
            while (tp>p1){
                c[tp]=c[tp-1];
                tp--;
            }
            c[p1]=t;
            p1+=1;
            p2+=1;
        }
    }
    
    for (int i=0;i<p;i++){
        cout<<c[i];
    }
    return 0;
}

int main(){
  int size1,size2;
  cin >> size1;
  int arr1[size1];

  for (int i=0;i<size1;i++){
    cin>>arr1[i];
  }
  
  cin >> size2;
  int arr2[size2];

  for (int i=0;i<size2;i++){
    cin>>arr2[i];
  }
  
  cout<<"\n"<<"Output"<<endl;
  
  mergeandsort(arr1,arr2,size1,size2);
  
}
