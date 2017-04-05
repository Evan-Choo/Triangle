//
//  Triangle.cpp
//  Triangle
//
//  Created by Evan Choo on 17/4/5.
//  Copyright © 2017年 Evan Choo. All rights reserved.
//
#include <iostream>
#include <cmath>
#include "Triangle.hpp"
using namespace std;

class Triangle{
    double a, b, c;
public:
    Triangle();
    Triangle(double,double,double);
    double Area();
    friend bool operator>(Triangle,Triangle);//操作符重载。
};

int main(){
    //获取三角形的边长。
    double l11,l12,l13,l21,l22,l23;
    cout << "Please type the length1 of triangle1: " << endl;
    cin >> l11;
    cout << "Please type the length2 of triangle1: " << endl;
    cin >> l12;
    cout << "Please type the length3 of triangle1: " << endl;
    cin >> l13;
    cout << "Please type the length1 of triangle2: " << endl;
    cin >> l21;
    cout << "Please type the length2 of triangle2: " << endl;
    cin >> l22;
    cout << "Please type the length3 of triangle2: " << endl;
    cin >> l23;
    Triangle t1 = Triangle(l11,l12,l13);
    Triangle t2 = Triangle(l21,l22,l23);
    
    if (t1 > t2){
        cout << "The area of triangle1 is greater than triangle2." << endl;
    }else{
    cout << "The area of triangle1 is not greater than triangle2" << endl;
    }
    
    return 0;

}

Triangle::Triangle(double l1, double l2, double l3){
    a = l1;
    b = l2;
    c = l3;
    
}

double Triangle::Area(){
    double s = (a+b+c)/2;
    double area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}

bool operator>(Triangle t1,Triangle t2){
    if (t1.Area()>t2.Area()){
        return true;
    }else{
        return false;
    }
}
