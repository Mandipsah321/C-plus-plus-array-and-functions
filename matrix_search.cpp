#include<iostream>
using namespace std;
int main(){
cout<<"Enter the number of rows and columns respectively:"<<endl;
int n,m;
int target;
cin>>n;
cin>>m;
int matrix[n][m];
cout<<"Enter the number to be seached:";
cin>>target;
cout<<"Enter the elements of the matrix in sorted order:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0; j<m; j++){
        cin>>matrix[i][j];
    }
}
bool found=false;
int r=0, c=m-1;
while(r<n && c>=0){
    if(matrix[r][c]==target)
    found=true;
    if(matrix[r][c]>target){
        c--;
    }
    else{
    r++;
    }
}
if(found){
    cout<<"Element found successfully.";
}
else{
    cout<<"Element wasn't found.";
}
return 0;
}