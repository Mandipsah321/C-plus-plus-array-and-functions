#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements to be entered: ";
cin>>n;
int a[n];
cout<<"Enter the elements: "<<endl;
for(int i=0; i<n; i++){
    cin>>a[i];
}
cout<<"The sum of subarrays are: "<<endl;

for(int i=0; i<n; i++){
 int curr=0; 
for(int j=i; j<n; j++){
    curr=curr + a[j];
    cout <<curr <<endl;
    }
}
return 0;
}