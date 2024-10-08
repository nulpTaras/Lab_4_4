//
//  main.cpp
//  Lab_4_4
//
//  Created by Taras Neridnyi on 08.10.2024.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {

    double R;
    double x;
    double y;
    double xp , xk , dx;
    
    cout << "Введіть значення R: ";
    cin >> R;

    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    
    cout << fixed;

    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk) {

        if (x <= -7-R || (-7+R <= x && x <= -4)) {
            y = R;
        }else {
            if (-7 - R < x && x <= -7 + R) {
                y = R - sqrt(R*R - pow((x+7),2));
            }else {
                if (-4 <= x && x <= 0) {
                    y = -(R*x)/4;
                }else {
                    if (x > 0 && x <= M_PI) {
                        y = sin(x);
                    }else {
                        y = x - M_PI;
                    }
                }
            }
        }

        cout << "|" << setw(7) << setprecision(2) <<x
             << " |" << setw(10) << setprecision(3) << y
             << " |" << endl;

        x += dx;
    }

    cout << "----------------------\n" << endl;

    cin.get();
    return 0;
    
}
