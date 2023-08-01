#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned int    Case = 0;
    unsigned int    Student_Num = 0;
    double          Better_Than_AVG = 0;
    double          Avg = 0;
    double          result;
    cin >> Case;

    for(int i = 0 ; i < Case ; i++) {
        Avg = 0; Better_Than_AVG = 0;   // Reset of Avg
        cin >> Student_Num;       // Number of student in one line
        int *P = new int [Student_Num];

        for(int j = 0 ; j < Student_Num ; j++) {
            cin >> P[j];
            Avg += P[j];
        }
        Avg /= Student_Num;

        for(int j = 0 ; j < Student_Num ; j++) {
            if(P[j] > Avg)   Better_Than_AVG++;
        }
        cout << fixed;
        cout.precision(3);
        result = std::round(Better_Than_AVG / Student_Num * 100000) / 1000;
        cout << result << "%" << endl;
        delete [] P;
    }
}