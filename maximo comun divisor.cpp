// maximo comun divisor.cpp : 
// AYUUUUUDAAAAAAAAAAAAAAAAAA
//

#include <iostream>
#include <algorithm>


void MaximoComun(int MCD)
{
    int n1, n2, nu1, nu2;

    std::cout << MCD % 100;
    nu1 = std::max(n1, n2);
    nu2 = std::min(n1, n2);

    do
    {
        MCD = nu2;
        nu2 = nu1 % nu2;
        nu1 = MCD;
    } while (nu2 != 0);
}


int main()
{
    int num1, num2;
    do
    {
        std::cout << "Ingresa el primer numero: \n";
        std::cin >> num1;
        std::cout << "Ingresa el segundo numero: \n";
        std::cin >> num2;
        if (num1 < 0)
        {
            std::cout << "Intentalo de nuevo carenavo :D \n";
        }
    } while (num1 < 0);
    std::cout << "El M.C.D. entre " << num1 << " y " << num2 << " es: ";
    MaximoComun(num1 - num2);
    std::cout << std::endl << std::endl;
}