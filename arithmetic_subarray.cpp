#include"bits/stdc++.h"
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements to be entered: ";
cin>>n;
cout<<"Enter the numbers: "<<endl;
int array[n];
for(int i=0; i<n; i++){
    cin>>array[i];
}
int ans=2;
int curr=2;
int j=2; 
int pd=array[1]-array[0];
while(j<n){
    if(pd==array[j]-array[j-1]){
        curr++;
    }
    else{
        pd=array[j]-array[j-1];
        curr=2;
    }
    ans=max(ans, curr);
    j++;
}
cout<<"The maximum number of arithmetic subarray formed is: "<<ans;
return 0;
}