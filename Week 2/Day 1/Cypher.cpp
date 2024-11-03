

#include<iostream>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0; i<T; i++)
    {

    int wh;
    cin>>wh;
    int arr[wh];
    for(int j=0;j<wh;j++){
        cin>>arr[j];
    }
    for(int j=0;j<wh;j++){
            int x;
            string s;
            cin>>x>>s;
        for(int k=0;k<x;k++){
            char c=s[k];
            if(c=='D'){
                if(arr[j]!=9){
                arr[j]++;}
                else{
                    arr[j]=0;
                }

            }
            else{
                 if(arr[j]!=0){
                arr[j]--;}
                else{
                    arr[j]=9;
                }
            }
        }
    }

    for(int i=0;i<wh;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    }
}
