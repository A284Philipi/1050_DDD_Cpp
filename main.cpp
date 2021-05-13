#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a == 61 || a==31 || a == 11 || a == 21 || a == 71 || a == 32 || a == 19 || a == 27)
    switch (a){
case 61:
    cout << "Brasilia" <<endl;
    break;
case 31:
    cout << "Belo Horizonte" <<endl;
    break;
case 11:
    cout << "Sao Paulo" <<endl;
    break;
case 71:
    cout << "Salvador" <<endl;
    break;
case 21:
    cout << "Rio de Janeiro" <<endl;
    break;
case 32:
    cout << "Juiz de Fora" <<endl;
    break;
case 19:
    cout << "Campinas" <<endl;
    break;
case 27:
    cout << "Vitoria" <<endl;
    break;
    }else{
    cout << "DDD nao cadastrado" <<endl;
    }
    return 0;
}
