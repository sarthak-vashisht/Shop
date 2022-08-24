#include<iostream>
using namespace std;
void sum(int mat1[3][2],int mat2[3][2],int ans[3][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            ans[i][j]=mat1[i][j]+mat2[i][j];
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}


int main(){
    int mat1[3][2]={{1,2},{2,3},{3,4}};
    int mat2[3][2]={{1,2},{2,3},{3,4}};
    int ans[3][2];
    sum(mat1,mat2,ans);

}