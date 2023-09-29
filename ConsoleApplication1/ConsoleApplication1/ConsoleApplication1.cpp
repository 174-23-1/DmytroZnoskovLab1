#include <iostream>

int main()
{
    //x=(-7.3);y=(15*10^-2);z=(36)
    float x = (-7.3);
    float y = (15*(pow(10, -2)));
    int z = (36);
    float b = 15 / 100 * 100 % 3;
    float result{ ((12 * z / y) + (11 * x) - (b * (x + y))) / ((4 * x) / y + (2 * z / x)) };
    std::cout << "Result = " << result;  //Результат через калькулятор приблизительно -13.7.
}   