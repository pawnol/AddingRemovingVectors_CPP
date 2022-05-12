/*
Adding Removing Vectors
Pawelski
5/12/2022
Please follow the insturctions on the activity guide!
*/

#include <iostream>
#include <vector>
#include <string>

/// <summary>
/// Prints the elements of the vector such that each element is seperated by
/// a comma.
/// </summary>
/// <param name="args">The vector storing the elements to display.</param>
void Print(std::vector<std::string> args)
{
    for (int i = 0; i < args.size() - 1; i++)
    {
        std::cout << args[i] << ",";
    }
    std::cout << args[args.size() - 1] << "\n";
}

int main()
{
    std::vector<std::string> names_vector;

    names_vector.push_back("Jim");
    names_vector.push_back("Joe");
    names_vector.push_back("Bob");
    names_vector.push_back("Eve");
    names_vector.push_back("Mia");
    names_vector.push_back("Ivy");
    Print(names_vector);
    std::cout << "\n";

    names_vector.insert(names_vector.begin(), "Jay");
    Print(names_vector);
    std::cout << "\n";

    names_vector.insert(names_vector.begin() + 2, "Ada");
    Print(names_vector);
    std::cout << "\n";

    names_vector.pop_back();
    Print(names_vector);
    std::cout << "\n";

    names_vector.erase(names_vector.begin() + 1);
    Print(names_vector);
    std::cout << "\n";
    return 0;
}
