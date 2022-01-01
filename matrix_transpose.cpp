#include<iostream>
using namespace std;
//This program is only applicable for square matrix.
int main(){
int n,m;
cout<<"Enter the number of rows and columns respectively: " ;
cin>>n;
cin>>m;
int array[n][m];
cout<<"Enter the elements of matrix: "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>array[i][j];
    }
}
for(int i=0; i<n; i++){
    for(int j=i+1; j<m; j++){
        int temp=array[i][j];
        array[i][j]=array[j][i];
        array[j][i]=temp;
    }
}
cout<<"The transpose matrix is: "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<array[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}