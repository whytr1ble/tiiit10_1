# Решение квадратного уравнения

Простая программа на C++, предназначенная для вычисления корней квадратного уравнения вида:

```
ax² + bx + c = 0
```

##  Возможности

- Расчёт дискриминанта
- Определение количества действительных корней
- Вывод одного или двух корней с точностью до 4 знаков после запятой
- Обработка случая, когда действительных корней нет

##  Пример работы

**Ввод:**
```
Enter coefficients a, b and c: 1 5 6
```

**Вывод:**
```
Root 1 = -2.0000
Root 2 = -3.0000
```

##  Пример кода

```cpp
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c;
    double discriminant;
    double root1, root2;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        cout << fixed << setprecision(4);
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        root1 = -b / (2*a);
        cout << fixed << setprecision(4);
        cout << "Root = " << root1 << endl;
    }
    else {
        cout << "No real roots." << endl;
    }

    return 0;
}
```

