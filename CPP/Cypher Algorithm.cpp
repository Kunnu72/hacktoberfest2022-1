#include<iostream>
#include<string>
using namespace std;
int main(){
    int i,j,k;
    string p,q;
    int key;
    cout<<"Enter key\n";
    cin>>key;
    cout<<"Enter message\n";
    cin>>p;
    for(i=0;i<p.size();i++){
        q+=(p[i]-'A'+key)%26+'A';
    }
    cout<<"\n\nEncrypted message is "<<q<<'\n';
    return 0;
}
