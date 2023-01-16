/// Вычисление объёма куба и площади его боковой поверхности
/// @author Кондакаков Н.С.

using namespace std;

/// считает объём куба
float v_kub(float a)
{
    return a*a*a;
}

/// считает площадь боковой поверхности куба
float s_kub(float a)
{
    return 6*(a*a);
}
