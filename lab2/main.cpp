#include <iostream>
#include "student.hpp"

int main()
{
    sample::student student;
    std::cout << "This is the second exercise" << std::endl;
    std::cout << "This is my student number: " << student.get_student_number() << std::endl;
    return 0;
}