//ЛР3. Полиморфизм. Вариант 14.
//Абстрактный класс – термический процесс. Методы: вычисление работы, совершённой газом, печать параметров.
//Производные классы – изохорный процесс, изобарный процесс.
//Создать вектор термических процессов. В цикле пройти по всем элементам вектора и для каждого элемента
//        напечатать параметры и значение работы, совершённой газом.
//Каждый класс определить и описать в своём заголовочном файле и своём файле с исходным кодом.
//Справка. Работа, совершённая газом, определяется как A = ∫ pdV V2
//V1
//, где V1
//,V2 – начальный и конечный объём газа, p – давление
//
//        газа. В изобарном процессе p = const, в изохорном процессе V = const.

#include <iostream>
#include <vector>
#include "Izohor.h"
#include "Izobar.h"
#include "Thermic_process.h"



int main() {
    u_int const n = 4;

    std::vector <Thermic_process*> processess;
    Thermic_process* const test1 = new Izohor(1,2,3);
    processess.push_back(test1);
    Thermic_process* const test2 = new Izobar(4, 5, 6);
    processess.push_back(test2);
    Thermic_process* const test3 = new Izohor(6,5,4);
    processess.push_back(test3);
    Thermic_process* const test4 = new Izobar(3, 2, 100);
    processess.push_back(test4);

    for (int i = 0; i < n; ++i) {
        processess[i]->work();
        processess[i]->print();
        std::cout << "----------------------" << std::endl;
    }
    return 0;
}
