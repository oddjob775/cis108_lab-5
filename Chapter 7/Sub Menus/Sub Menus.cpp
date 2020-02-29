/*
use switch statements to make a menu

request inputs for area
    for rectangle
        for cirlce
            for right triangle

request inputs for volume
    for cylinder
        for sphere

*/

#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::setw;
using std::left;
using std::right;
using std::pow;
using std::endl;

const double
pi = 3.141592653;

double
rect_h,
rect_w,
circ_r,
rtl_a,
rtl_b,
cyl_r,
cyl_h,
sph_r;

int
main_menu_choice,
area_menu_choice,
volume_menu_choice;

int main()
{

    cout << setw(60) << right << "-----Main Menu-----\n\n\n" << setw(50);
    cout << setw(56) << right << "1) Calculate Area\n" << setw(60);
    cout << setw(58) << right << "2) Calculate Volume\n" << setw(60);
    cout << setw(56) << right << "3) Quit Program\n\n\n" << setw(60);
    cout << setw(64) << right << "What would you like to do?\n";
    cin >> main_menu_choice;

    switch (main_menu_choice)
    {
    case 1:
        cout << "\nOpening Area Calculator Menu...\n\n";
        cout << setw(60) << right << "-----Area Menu-----\n\n\n" << setw(50);
        cout << setw(53) << right << "1) Rectangle\n" << setw(60);
        cout << setw(50) << right << "2) Circle\n" << setw(60);
        cout << setw(60) << right << "3) Right Triangle\n\n\n" << setw(60);
        cout << "\n\nWhat would you like to find the area of?\t\n";
        cin >> area_menu_choice;

        switch (area_menu_choice)
        {
        case 1:

        {
        cout << "\nWhat's the height of your rectangle?\t";
        cin >> rect_h;
        cout << "\nWhat's the width of your rectangle?\t";
        cin >> rect_w;

        const double
            rect_a = rect_h * rect_w;

        cout << "\n\nThe area of your rectangle is:\t" << rect_a << "\n";  }
        break;

        case 2:

        {
        cout << "\nWhat's the radius of your circle?\t";
        cin >> circ_r;

        const double
            circ_a = (pi * pow(circ_r, 2));

        cout << "\nThe area of your circle is:\t" << circ_a << "\n";  }
        break;

        case 3:

        {cout << "\nWhat's the length of leg A?:\t";
        cin >> rtl_a;
        cout << "\nWhat's the length of leg B?:\t";
        cin >> rtl_b;

        const double
            rt_a = ((rtl_a * rtl_b) / 2);

        cout << "\nThe area of your Right Triangle is:\t" << rt_a << "\n";  }
        break;

        default:
        {cout << "Invalid Choice Given" << endl; }
        break;
        }
        break;

    case 2:
    {
        cout << "\nOpening Volume Calculator Menu\n\n\n";
        cout << setw(64) << right << "-----Volume Menu-----\n\n\n" << setw(50);
        cout << setw(56) << right << "1) Cylinder\n" << setw(60);
        cout << setw(54) << right << "2) Sphere\n" << setw(60);
        cout << "\n\nWhat would you like to find the volume of?\t";
        cin >> volume_menu_choice;

        switch (volume_menu_choice)
        {
        case 1:

        {
            cout << "\nWhat's the radius of your cylinder?\t";
            cin >> cyl_r;
            cout << "\nWhat's the height of you cylinder?\t";
            cin >> cyl_h;

            const double
                cyl_v = (pi * (pow(cyl_r, 2) * cyl_h));

            cout << "\n\nThe volume of your cylinder is:\t" << cyl_v << "\n"; }
        break;

        case 2:

        {
        cout << "\nWhat's the radius of your sphere?\t";
        cin >> sph_r;

        const double
            sph_v = ((1.33333) * pi * pow(sph_r, 3));

        cout << "\nThe volume of your circle is:\t" << sph_v << "\n"; }
        break;

        default:
        {cout << "Invalid Choice Given" << endl; }
        break;
        }
    }
    }
}