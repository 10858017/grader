#pragma once

#include <string>
class Standard{
    public:
        Standard(std::string standardName);
        float getScore();
    private:
        float cumulative_score;
        int count;
        std::string standard_name;

};

bool operator==(const Standard& lhs, const Standard& rhs);
bool operator>(const Standard& lhs, const Standard& rhs);
bool operator<(const Standard& lhs, const Standard& rhs);

bool operator==(const Standard& lhs, const std::string& rhs);
bool operator>(const Standard& lhs, const std::string& rhs);
bool operator<(const Standard& lhs, const std::string& rhs);


bool operator==(const std::string& lhs, const Standard& rhs);
bool operator>(const std::string& lhs, const Standard& rhs);
bool operator<(const std::string& lhs, const Standard& rhs);