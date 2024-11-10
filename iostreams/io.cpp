#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::string file_name;
    std::cout << "Enter a file name: ";
    std::cin >> file_name;

    std::ofstream file(file_name.c_str(), std::ios::app);

    if(file.is_open())
    {
        std::cout << "success" << std::endl;
    }

    std::vector<std::string> names;
    names.push_back("Boyapati");
    names.push_back("Nivya");
    names.push_back("Praneet");

    for(std::string name: names)
    {
        file << name << std::endl;
    }

    file.close();
    return 0;
}