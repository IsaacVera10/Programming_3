//
// Created by rudri on 10/11/2020.
//

#ifndef POO2_UNIT2_TASK2_V2021_P1_H
#define POO2_UNIT2_TASK2_V2021_P1_H

#include <string>
using namespace std;

inline string input(){
    string value;
    getline(cin, value); 
    return value;
}

inline string input(const string& message){
    string value;
    getline(cin, value); 
    return message+value;
}

template<typename T>
T input(){
    T value;
    cin >> value;
    return value;
}

void question_1_1();
void question_1_2();
void question_1_3();
void question_1_4();

#endif //POO2_UNIT2_TASK2_V2021_P1_H
