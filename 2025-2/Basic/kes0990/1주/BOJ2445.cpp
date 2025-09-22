#include <iostream>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin>>N;
    for(int i=0; i<N-1; i++){
        for(int j=0; j<=0+i; j++){
            cout<<"*";
        }
        for(int k=0; k<N*2-2-i*2;k++){
            cout<<" ";
        }
        for(int t=0; t<=0+i; t++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=0; i<N*2;i++){
        cout<<"*";
    }
    cout<<"\n";
    for(int i=0; i<N-1; i++){
        for(int j=N-1; j>0+i; j--){
            cout<<"*";
        }
        for(int k=0; k<2+i*2;k++){
            cout<<" ";
        }
        for(int t=N-1; t>0+i; t--){
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}
