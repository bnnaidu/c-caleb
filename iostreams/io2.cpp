#include <iostream>
#include <vector>
#include <fstream>

int main()
{
    std::ifstream file("tacos.txt");

    std::string line;
    while (getline(file, line))
    {
        std::cout << line << std::endl;
    }

    // std::vector<std::string> names;
    // std::string input;

    // while(file >> input)
    // {
    //     names.push_back(input);
    // }

    // for(std::string name : names)
    // {
    //     std::cout << name << std::endl;
    // }
    
    return 0;
}