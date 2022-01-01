#include<bits/stdc++.h>
#include<climits>
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
 int curr=0; 
int maxSum=INT_MIN;
for(int i=0; i<n; i++){
    curr=curr+a[i];
    if(curr<0){
        curr=0;
    }
    maxSum=max(maxSum, curr);
}
cout<<"The maximum sum of subarray is: "<<maxSum;

return 0;
}