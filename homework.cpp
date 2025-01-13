#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    std::vector<std::string> names = {"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"};
    std::vector<int> num = {100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80};

    //1
    int curr_index = 0;
    while(curr_index < names.size())
    {
        std::cout << names[curr_index] << " ";
        curr_index = curr_index + 2;
    }
    std::cout << "\n";

    //2
    curr_index = 0;
    while(curr_index < num.size())
    {
        if(num[curr_index] > 0)
        {
            std::cout << num[curr_index] << " ";
        }
        curr_index = curr_index + 1;
    }
    std::cout << "\n";

    //3
    int sum = 0;
    curr_index = 0;
    while(curr_index < num.size())
    {
        sum = num[curr_index] + sum;
        curr_index = curr_index + 1;
    }
    std::cout << sum << "\n";
    
    //4
    curr_index = 0;
    while(curr_index < num.size())
    {
        if(num[curr_index]%2 == 1)
        {
            std::cout << num[curr_index] << " ";
        }
        curr_index = curr_index + 1;
    }
    std::cout << "\n";

    //5
    //idk lol
    
    //6
    int max = num[1];
    curr_index = 0;
    while(curr_index < num.size())
    {
        if(num[curr_index] > max)
        {
            max = num[curr_index];
        }
        curr_index = curr_index + 1;
    }
    std::cout << "Max is " << max << "\n";
    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}