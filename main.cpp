#include <iostream>
using namespace std;

int main () {
     int i, n, primo=1, secondo=1, terzo=0;
    cin>>n;
    if (n>1){
        cout<<primo<<endl;
        cout<<secondo<<endl;
    }else{
        cout<<"errore"<<endl;
    }
     for(i=1;i<n;i++){
          terzo=primo+secondo;
          primo=secondo;
          secondo=terzo;
          cout<<terzo<<endl;
     }
    return 0;
}
