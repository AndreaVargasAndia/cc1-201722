#include <iostream>

using namespace std;

int main()
{
    int n,m,t,b=0;
    cout << "ingresa un numero" <<endl;
    cin>>n;
    for(m=1;m<=n;m=m+1){
            t=n%m;
            if(t==0)
                b=b+1;}
            if (b>2){
                cout<<"No es primo"<<endl;}
            else{
                cout<<"Es primo"<<endl;}
    return 0;

}
