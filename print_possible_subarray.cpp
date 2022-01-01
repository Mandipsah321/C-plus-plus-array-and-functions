#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements to be entered: ";
cin>>n;
int a[n];
cout<<"Enter the numbers:"<<endl;
for(int i=0; i<n; i++){
    cin>>a[i];
}
cout<<"The possible subarrays are: "<<endl;
for (int  i = 0; i < n; i++){
    for (int  j = i; j<n; j++) {
        for(int k=i; k<=j;k++){
            cout<<a[k]<<"  ";
        }
        cout<<endl;
    }
    
}
return 0;
}