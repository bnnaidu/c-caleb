#include <iostream>
#include <limits>

void print_array(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    const int SIZE=10;

    int guesses[SIZE];
    int count=0;

    for(int i=0; i<SIZE; i++)
    {
        if(std::cin >> guesses[i]) /*cin returns true if input worked*/       {
            count++;
        }
        else
        {
            break;
        }
    }
    print_array(guesses, SIZE);
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::string test;
    std::cin >> test;
    std::cout << test << "\n";

    /*
    int guesses[] = {10, 20, 30, 40, 50};
    int size = sizeof(guesses)/sizeof(guesses[0]); 
    print_array(guesses, size); 


    int numof_elements = 5; 
    
    int size = sizeof(guesses)/sizeof(guesses[0]);
    std::cout << "size: " << size << std::endl;
    
    for(int i=0; i<numof_elements; i++)
    {
        std::cout << guesses[i] << "\t";
    }

    std::cout << std::endl;
    */

    return 0;
}
