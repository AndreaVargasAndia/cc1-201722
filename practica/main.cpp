#include <iostream>

using namespace std;

int main()
{
    int y;
    cout << " ingresa un año" <<endl;
    cin>>y;
    if(y%4==0){
        if((y%100)!=0 || (y%400)==0)
            cout<<"Es biciestro"<<endl;
            }
        else
            cout<<"No es biciestro"<<endl;
    return 0;

}
