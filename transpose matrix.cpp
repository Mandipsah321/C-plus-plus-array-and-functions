#include<iostream>
using namespace std;
int main(){
cout<<"This program  prints the transpose matrix of the entered  matrix:"<<endl;
cout<<"Enter the number of rows and columns respectively in the given  matrix:";
int n;
int m;
cin>>n;
cin>>m;
int array[n][m];
int transpose[m][n];
cout<<"Enter the elements of matrix row wise:";
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>array[i][j];
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        transpose[j][i]=array[i][j];
        }
}
cout<<"The required transpose matrix is: "<<endl;
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        cout<<transpose[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}