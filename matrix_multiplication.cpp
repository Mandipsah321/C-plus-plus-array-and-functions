#include<iostream>
using namespace std;
int main(){
int r1,c1, r2, c2;
cout<<"Enter the number of rows and columns  in the first matrix respectively: "<<endl;
cin >>r1;
cin>>c1;
cout<<"Enter the number of rows and columns in the second matrix respectively: "<<endl;
cin>>r2;
cin>>c2;
int m1[r1][c1];
int m2[r2][c2];
int ans[r1][c2];
if(c1!=r2){
    cout<<"The matrix multiplication isn't possible"<<endl;
    return 0;
}
cout<<"Enter the elements of first matrix row wise:"<<endl;
for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
        cin>>m1[i][j];
        
    }
}
cout<<"Enter the elements of second matrix row wise:"<<endl;
for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cin>>m2[i][j];
        
    }
}
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        ans[i][j]=0;
    }
}
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        for(int k=0; k<r2; k++){
            ans[i][j]+=m1[i][k]*m2[k][j];
        }
    }
}
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<"\n";
}
return 0;
}