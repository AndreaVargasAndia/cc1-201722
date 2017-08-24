#include <iostream>

using namespace std;

int main()
{
    int x,a,b,c=0;
    cout << "ingresa un numero" <<endl;
    cin>>x;
    while (x!=0)
    for(a=0;a<x+1;a=a+1){
        b=x%a;
        if(b==0)
            c=c+1;}

            if (c==2){
                cout<<"Es primo"<<endl;}
            else{
                cout<<"No es primo"<<endl;}
    return 0;

}
