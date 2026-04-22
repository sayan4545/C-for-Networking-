#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols"<<endl;
    cin>>row>>col;
    for(int i =0;i<row;i++){
        //inner loop for the colums
        for(int j=0;j<col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}