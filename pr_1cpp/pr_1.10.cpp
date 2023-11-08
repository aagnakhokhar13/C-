#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the rows";
    cin >>row;
    cout<<"Enter the column";
    cin >>col;
     
     int matrix[row][col];
     int transpose[col][row];

     cout<<"Enter the element of matrix :";
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >>matrix[i][j];
        }
     }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose =matrix[j][i];
        }
     }
     cout<<"Transpose of matrix:-"<<endl;
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
           cout<< transpose[i][j]<<" ";
        }
        cout<<endl;
     }



}