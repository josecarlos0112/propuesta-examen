#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char respuesta;
    int limit;
    cout << "¿Desea agregar un limite al programa?"<< endl;
    cout << "SI = y ; NO= n"<< endl;
    cin >> respuesta;
    if (respuesta == 'y'){
        cout << "Ingrese el limite: ";
        cin >> limit;
    }
    else{
        limit = 17;
    }
    for (int a = 1; a <= limit; ++a) {
        for (int b = a; b <= limit; ++b) {
            double c = std::sqrt(a*a + b*b);

            if (c == static_cast<int>(c)) {
                std::cout << a << ", " << b << ", " << static_cast<int>(c) << std::endl;
            }
        }
    }

    return 0;
}
