#include <iostream>
using namespace std;
int main()
{
    int x[10];
    cout<< "aray x, aray x masih kosong"<< endl;
    cout<< "masukan nilai index {3}:"<<endl;
    cin>> x[3];
    cout<< x[3]<<endl;
    cout<<endl;

    cout<< "aray a berisi {2,3,1,6,5}"<<endl;
    int a[5] = {2,3,1,6,5};
    cout << a[0] <<endl;
    cout<< std::endl;
    cout<<endl;

    int xy[2][3];
    cout<< "aray xy, arah xy masih kosong"<<endl;
    cout<< "masukan nilai index [2][3]:"<<endl;
    cin>>xy[1][2];
    cout<< xy[1][2]<<endl;
    cout<<endl;
    
    cout<< "aray ab, aray ab berisi {{12,1},{21},{9},{1,2}}"<<endl;
    int ab[4][2]={{12,1},{21},{9},{1,2}};
    cout<< ab[0][1]<<endl;
}