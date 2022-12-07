#include <iostream>
#include <iomanip>

using namespace std;

double mass, onEarth, onVenus, onMars;
bool isHeavy, isLight;

int main()
{
    cout << "Input the mass of the object:" << endl;
    cin >> mass;
    if (mass < 0)
    {
        cout << "mass must be greater than zero";
        return 0;
    }
    
    onEarth = mass * 9.807;
    if (onEarth > 1500)
    {
        isHeavy = true;
    } else if (onEarth < 5)
    {
        isLight = true;
    }
    onVenus = mass * 8.87;
    onMars = mass * 3.7;

    cout << fixed << setprecision(4);
    cout << left << setw(6) << "Planet" << "\t" << right << setw(14) << "Weight (N)" << endl << endl;
    if (isHeavy)
    {
        cout << left << setw(6) << "Earth" << "\t" << right << setw(14) << onEarth << "\t" << "The object is heavy" << endl;
    } else if (isLight)
    {
        cout << left << setw(6) << "Earth" << "\t" << right << setw(14) << onEarth << "\t" << "The object is light" << endl;
    } else 
    {
        cout << left << setw(6) << "Earth" << "\t" << right << setw(14) << onEarth << endl;
    }
    cout << left << setw(6) << "Venus" << "\t" << right << setw(14) << onVenus << endl;
    cout << left << setw(6) << "Mars" << "\t" << right << setw(14) << onMars << endl;
}