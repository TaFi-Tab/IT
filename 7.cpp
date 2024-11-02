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
        }else if (b<a){
            if (a%b==0){
                cout<<"Phong bat ung ho"<<' '<<a/b<<' '<<"lan!"<<endl;
            }else{
                cout<<"Phong bat ung ho"<<fixed<<setprecision(2)<<' '<<1.0*a/b<<' '<<"lan!"<<endl;
            }
        }else{
            cout<<"Dang tuyen duong";
        }
    
    }
    return 0;
    
}