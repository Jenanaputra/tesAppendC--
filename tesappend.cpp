#include <fstream>
//#include <sstream>
#include <iostream>
#include <string.h>

float variable;
std::string str;
//stringstream stream;

int main(){
    variable  = 3.89;
    std::ofstream outfile;
    //stringstream stream;
    //stream << variable;
    //stream >> str;
    str = std::to_string(variable);
    outfile.open("test.txt", std::ios_base::app); // append instead of overwrite
    outfile << "\n" + str;
    return 0;

}
