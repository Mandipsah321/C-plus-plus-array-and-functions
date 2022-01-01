#include<iostream>
using namespace std;
int main(){
int n; 
int mx=-1999999;
cout<<"Enter the number of elements to be entered: ";
cin>>n;
int array[n];
cout<<"Enter the numbers: "<<endl;
for(int i=0; i<n; i++){
    cin>>array[i];
}
for(int i=0; i<n; i++){
  mx=max(mx, array[i]);
  cout<<mx<<endl;
}
return 0;
}