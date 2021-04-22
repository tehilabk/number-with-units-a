#include <iostream>
#include <fstream>
#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel {

    void NumberWithUnits::read_units(ifstream& file){
    }


    ostream& operator<<(ostream& out, const NumberWithUnits& num){
        return out;
    }
    istream& operator>>(istream& in, NumberWithUnits& num){
        return in;

    }


    NumberWithUnits operator+(const NumberWithUnits& x, const NumberWithUnits& y) { 
        return x;
    }
    NumberWithUnits operator+(const NumberWithUnits& num, double x) {
        return num;
    }
    NumberWithUnits operator+=(NumberWithUnits& x, const NumberWithUnits& y) {
        return x;
    }

    NumberWithUnits operator++(NumberWithUnits& num) {
        return num;
    }
    NumberWithUnits operator++(NumberWithUnits& num, int) {
        return num;
    }



    NumberWithUnits operator-(const NumberWithUnits& x, const NumberWithUnits& y) {
        return x;
    }
    NumberWithUnits operator-(const NumberWithUnits& num) {
        return num;
    }
    NumberWithUnits operator-=(NumberWithUnits& x, const NumberWithUnits& y) {
        return x;
    }


 
    NumberWithUnits operator--(NumberWithUnits& num) {
        return num;
    }
    NumberWithUnits operator--(NumberWithUnits& num, int) {
        return num;
    }


    NumberWithUnits operator*(NumberWithUnits& num, double x) {
        return num;
    }
    NumberWithUnits operator*(double x, NumberWithUnits& num) {
        return num;
    }
  

    bool operator>(const NumberWithUnits& x, const NumberWithUnits& y){
       return true;
    }
    bool operator>=(const NumberWithUnits& x, const NumberWithUnits& y){
        return true;
    }
    bool operator<(const NumberWithUnits& x, const NumberWithUnits& y){
        return true;
    }
    bool operator<=(const NumberWithUnits& x, const NumberWithUnits& y){
        return true;
    }
    bool operator==(const NumberWithUnits& x, const NumberWithUnits& y){
        return true;
    }
    bool operator!=(const NumberWithUnits& x, const NumberWithUnits& y){
        return true;
    }
}