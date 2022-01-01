#include<iostream>
using namespace std;
int main(){
cout<<"This program only prints the transpose matrix of the entered square matrix:"<<endl;
cout<<"Enter the number of rows in the given square matrix:";
int n;
cin>>n;
int array[n][n];
cout<<"Enter the elements of matrix row wise:";
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>array[i][j];
    }
}
for(int i=0; i<n; i++){
    for(int j=i; j<n; j++){
        int temp= array[i][j];
        array[i][j]=array[j][i];
        array[j][i]=temp;
        }
}
cout<<"The required transpose matrix is: "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}