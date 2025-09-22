#include <iostream>
using namespace std;

int main(void){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int arr[9];
    int max=0,x=0;
    for(int i=0; i<9; i++){
        cin>>arr[i];
        if(arr[i]>max){max=arr[i]; x=i+1;}
    }

    cout<<max<<"\n"<<x<<"\n";

    return 0;
}
