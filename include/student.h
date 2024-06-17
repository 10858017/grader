#pragma once
/*
 Takes a given poppler pdf and processes it extracting the standard scores
 and student name
*/
#include <string>
#include "./standard.h"
#include <poppler/cpp/poppler-document.h>
#include <poppler/cpp/poppler-page.h>
#include <map>

class Student{
    public:
        Student(std::string fileName);
        Student();
        float getOverallScore();
        float getScore(std::string standard); //score cannot be a boolean because multiple results for same standard
        std::string getName();
        void addStandard(std::string standard);
        std::map<Standard, float> getAllScores();
    private:
        std::map<Standard, float> standards;

};