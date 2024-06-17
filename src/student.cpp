#include "../include/student.h"
#include "../include/standard.h"
#include <map>

Student::Student(std::string fileName){

}

Student::Student(){

}

float Student::getOverallScore(){
    return 0.0;

}


std::string Student::getName(){
    return "Hello";

}

std::map<Standard, float> Student::getAllScores(){
    return this->standards;
}

void Student::addStandard(std::string standard){

}

float Student::getScore(std::string standard){
    return 0.0;
}
