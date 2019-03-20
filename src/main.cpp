#include<iostream>
#include<regex>

#include "reutil.h"

int main(int argc, char const *argv[])
{
    if (argc < 3) {
        std::cout << "usage: regex test";
        return 1;
    }
    std::string regex = argv[1];
    std::string text = argv[2];
    std::cout << "regex = " << regex << std::endl;
    std::cout << "text = " << text << std::endl;
    std::cout << "matched groups = ";  
    for (auto group: reutil::groups(regex, text)) {
        std::cout << group << ", ";
    } 
    std::cout << std::endl;
    return 0;
}
