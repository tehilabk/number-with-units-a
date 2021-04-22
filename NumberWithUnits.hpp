#include <iostream>
#include <string>
using namespace std;

namespace ariel {
    class NumberWithUnits{

    private:
        double num;
        string type;

    public:
        NumberWithUnits(double sum, string unit){}
        static void read_units(ifstream& file);

        friend ostream& operator<<(ostream& out, const NumberWithUnits& num);
        friend istream& operator>>(istream& in, NumberWithUnits& num);
       
        friend NumberWithUnits operator+(const NumberWithUnits& x, const NumberWithUnits& y);
        friend NumberWithUnits operator+(const NumberWithUnits& num, double x);
        friend NumberWithUnits operator+=(NumberWithUnits& x, const NumberWithUnits& y);
        
        friend NumberWithUnits operator++(NumberWithUnits& num);
        friend NumberWithUnits operator++(NumberWithUnits& num, int);

        friend NumberWithUnits operator-(const NumberWithUnits& x, const NumberWithUnits& y);
        friend NumberWithUnits operator-(const NumberWithUnits& num);
        friend NumberWithUnits operator-=(NumberWithUnits& x, const NumberWithUnits& y);

        friend NumberWithUnits operator--(NumberWithUnits& num);
        friend NumberWithUnits operator--(NumberWithUnits& num, int);

        friend NumberWithUnits operator*(NumberWithUnits& num, double x);
        friend NumberWithUnits operator*(double x, NumberWithUnits& num);
       
        friend bool operator>(const NumberWithUnits& x, const NumberWithUnits& y);
        friend bool operator>=(const NumberWithUnits& x, const NumberWithUnits& y);
        friend bool operator<(const NumberWithUnits& x, const NumberWithUnits& y);
        friend bool operator<=(const NumberWithUnits& x, const NumberWithUnits& y);
        friend bool operator==(const NumberWithUnits& x, const NumberWithUnits& y);
        friend bool operator!=(const NumberWithUnits& x, const NumberWithUnits& y);
    };
}