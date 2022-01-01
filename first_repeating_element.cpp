#include<iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number of elements to be entered: ";
cin>>n;
int array[n];
cout<<"Enter the numbers: "<<endl;
for(int i=0; i<n; i++){
    cin>>array[i];
}
const int N=1e6+2;
int idx[N];
for(int i=0; i<N; i++){
    idx[i]=-1;
}
int minidx=1e7;
for(int i=0; i<n; i++){
    if(idx[array[i]]!=-1){
        minidx=min(minidx,idx[array[i]]);
    }
    else{
        idx[array[i]]=i;
    }
}
cout<<"The index of the first repeating element is: ";
if(minidx==1e7){
    cout<<-1<<endl;
}
    else{
        cout<<minidx+1<<endl;
    }
return 0;
}