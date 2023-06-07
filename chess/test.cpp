#include <iostream>


void main()
{
    setlocale(LC_ALL, "ru");
    int hight, shir, cell ;
    std::cout << "¬ведите высоту шахматной доски: "<<std::endl;
    std::cin >> hight;
    std::cout << "¬ведите ширину шахматной доски: "<<std::endl;
    std::cin >> shir;
    std::cout << "¬ведите величину €чейки шахматной доски:  "<<std::endl;
    std::cin >> cell;
    for (int i = 0; i < hight; i++)
    {
        for (int jj = 0; jj < cell; jj++)
        {
            for (int j = 0; j < shir; j++)
            {
                for (int ii = 0; ii < cell; ii++)
                {
                    std::cout << ((i + j) & 1 ? '-' : 'x');
                }
            }
            std::cout << "\n";
        }
    }
    std::cout << "\n\n\n";
}