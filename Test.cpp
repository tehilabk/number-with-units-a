#include "doctest.h"
#include "NumberWithUnits.hpp"
#include <stdexcept>
#include <iostream>
#include<stdio.h>
#include <fstream>
#include <sstream>

using namespace ariel;
using namespace std;
// using ariel::NumberWithUnits;


TEST_CASE("Plus"){
// 1 km = 1000 m
// 1 m = 100 cm

    NumberWithUnits km1(1,"km");
    NumberWithUnits m999(999,"m");
    NumberWithUnits m1(1,"m");
    NumberWithUnits cm100(100,"cm");
    NumberWithUnits m2(2,"m");

    CHECK_EQ(m999+cm100,km1);
    CHECK_NE(++m999+cm100,km1);
    CHECK_EQ(m1+cm100,m2);
    CHECK_NE(m1+cm100,m2++);

    NumberWithUnits cm50(50,"cm");

    CHECK_EQ(cm50+cm50,m1);
    CHECK_NE(m1+=cm50,m2);

}

TEST_CASE("Minus"){
// 1 kg = 1000 g
// 1 ton = 1000 kg

    NumberWithUnits kg1(1,"kg");
    NumberWithUnits kg2(2,"kg"); 
    NumberWithUnits g1000(1000,"g");       
    NumberWithUnits g50000(50000,"g");
    NumberWithUnits kg2000(2000,"kg");
    NumberWithUnits ton1_5(1.5,"ton");

    CHECK_EQ(kg2-g1000,kg1);
    CHECK_EQ(--ton1_5,g50000);
    CHECK_EQ(kg2000--,ton1_5-g50000);
    CHECK_NE(--ton1_5-g1000,kg1);
    CHECK_NE(ton1_5-g1000--,kg1);
    CHECK_EQ(kg1-kg2,-kg1);
    CHECK_EQ(kg1 - -kg1,kg2);


}

TEST_CASE("Mult"){
// 1 hour = 60 min
// 1 min = 60 sec 
    NumberWithUnits sec60(60,"sec");
    NumberWithUnits min1(1,"min");
    NumberWithUnits min10(10,"min");
    NumberWithUnits sec1(1,"sec");
    NumberWithUnits hour1(1,"h");

    CHECK_EQ(10*sec60,min10);
    CHECK_EQ(60*sec1,NumberWithUnits{1,"min"});
    CHECK_EQ(6*min10,hour1);
    CHECK_EQ(10*sec60,min10);
    CHECK_EQ(3*sec60,NumberWithUnits{180,"sec"});

}


TEST_CASE("Equals"){

    NumberWithUnits sec60(60,"sec");
    NumberWithUnits min1(1,"min");
    NumberWithUnits sec1(1,"sec");

    NumberWithUnits km1(1,"km");
    NumberWithUnits m1000(1000,"m");
    NumberWithUnits m1(1,"m");
    NumberWithUnits cm100(100,"cm");
  
    CHECK(sec60==min1);
    CHECK(km1==m1000);
    CHECK(m1==cm100);
    CHECK(sec60<=min1);
    CHECK(sec60>=min1);
    CHECK(km1>=m1000);
    CHECK(m1<=cm100);
    CHECK(km1<=m1000);
    CHECK(m1>=cm100);        
    CHECK(sec60!=NumberWithUnits{1,"h"});
    CHECK(km1<cm100*5);

    CHECK(++min1==min1+min1);
    CHECK(++min1!=min1+sec1);
    CHECK(min1++!=min1+min1);
    CHECK(min1++==min1);

    CHECK(--min1==min1-min1);
    CHECK(--min1!=min1-sec1);
    CHECK(min1--!=min1-min1);
    CHECK(min1--==min1);

}



TEST_CASE("Throws"){

    NumberWithUnits min1(1,"min");
    NumberWithUnits sec1(1,"sec");
    NumberWithUnits kg1(1,"kg");
    NumberWithUnits g1000(1000,"g");  

    CHECK_THROWS(min1+g1000);
    CHECK_THROWS(sec1+g1000);
    CHECK_THROWS(min1+kg1);
    CHECK_THROWS(sec1+kg1);
    CHECK_THROWS(min1-g1000);
    CHECK_THROWS(sec1-g1000);
    CHECK_THROWS(min1-kg1);
    CHECK_THROWS(sec1-kg1);
    
}