#include <iostream>
#include "student.hpp"

namespace sample
{

student::student()
{
    std::cout << "student created with" << std::endl;
}

int student::get_student_number(){
    return 126953231;
}

student::~student()
{
    std::cout << "student destructed" << std::endl;
}

} // namespace student