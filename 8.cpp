#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b; 
    if (b==0){
        cout<<"Congrats! Miss Phong bat is here"<<endl;
    }else{
        if (b>a){
        cout<<"Khiem ton, dang tuyen duong!"<<endl;
        }else{
            cout<<"Dang tuyen duong";
        }
    
    }
    return 0;
    
}