#include <iostream>
using namespace std;
 void arr(int ass[],int n){
     for(int i=n-1;i>=0;i--){
         for(int j=i-1;j>=0;j--){
             int m;
             if(ass[i]<ass[j]){
                m=ass[i];
                ass[i]=ass[j];
                ass[j]=m;
             }
         }
     }
     
 }
 int main(){
    /* int ass[]={2,34,54,32,56,67,7};
     arr(ass,7);*/
     int n;
     cout<<"enter the elemnet in array"<<endl;
     cin>>n;
     int ass[100];
     for(int i=0;i<n;i++){
         cin>>ass[i];
     }
     arr(ass,n);
     for(int i=0;i<n;i++){
         cout<<ass[i]<<" ";
     }
     cout<<endl;
 }