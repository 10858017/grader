#include "../include/student.h"
#include <gtest/gtest.h>
class StudentTestsADRIANO : public ::testing::Test{
    public:
        Student my_student;
        void SetUp() override {
            my_student = Student("./test_files/ADRIANO T ALFORQUE NSCAS Growth Winter 2023 Grade 8.pdf");
        }
};
TEST_F(StudentTestsADRIANO, ScoreTest){

    std::cout << my_student.getName() << std::endl;
    EXPECT_EQ(my_student.getScore("5.N.3.g"), 0.0);
}

/*
TEST_F(StudentTestsADRIANO, Score5N3G){
    EXPECT_EQ(my_student.getScore("5.N.3.g"), 0.0);
}

TEST_F(StudentTestsADRIANO, Score6A1b){
    EXPECT_EQ(my_student.getScore("6.A.1.b"), 0.0);
}

TEST_F(StudentTestsADRIANO, Score6A1d){
    EXPECT_EQ(my_student.getScore("6.A.1.d"), 1.0);
}

TEST_F(StudentTestsADRIANO, Score8D2a){
    EXPECT_EQ(my_student.getScore("8.D.2.a"), 1.0);
}

TEST_F(StudentTestsADRIANO, Score8D2d){
    EXPECT_EQ(my_student.getScore("8.D.2.d"), 0.0);
}

TEST_F(StudentTestsADRIANO, ScoreOverall){
    EXPECT_NEAR(my_student.getOverallScore(), 0.1, 0.001);
}

TEST_F(StudentTestsADRIANO, ScorePartiallyCorrect){
    EXPECT_NEAR(my_student.getScore("8.A.1.b"), 0.5, 0.001);
}
*/