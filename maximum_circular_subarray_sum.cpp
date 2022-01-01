#include<iostream>
#include<climits>
using namespace std;
int kadane(int array[],int n){
    int maxsum = INT_MIN;
    int currentsum=0;
    for(int i=0; i<n; i++){
    currentsum = currentsum + array[i];
    if(currentsum<0){
        currentsum=0;
    }
    maxsum= max(maxsum, currentsum);
    }
    return maxsum;
}
int main(){
 int n;
 cout<<"Enter the number of elements to be entered: ";
cin>>n;
int array[n];
cout<<"Enter the elements:"<<endl;
for(int i=0; i<n; i++){
    cin>>array[i];
}
int nonwrapsum=kadane(array,n);
int totalsum=0;
int wrapsum=0;
for(int i=0; i<n;i++){
    totalsum+=array[i];
    array[i]=-array[i];
}
wrapsum=totalsum + kadane(array,n);
cout<<"The maximum circular subarray sum is: "<<max(nonwrapsum, wrapsum)<<endl;
return 0;

}