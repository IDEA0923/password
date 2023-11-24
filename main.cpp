#include <iostream>
#include <time.h>
#include <string>
using namespace std;

int main(){
    srand(time(0));
    string g = "1234567890-_=+qwertyuiopasdfghjkl;zxcvbnm,QWERTYUIOPASDFGHJKLZXCVBNM,.";
    long int n;
    int m = g.size();
    cout<<m<<endl;
    cin>>n;
    int y;
    for(long int a = 0;a<n;a++){
        do{y = rand() % m;}while(y < 0);
        cout<<g[y - 1];
    }
}