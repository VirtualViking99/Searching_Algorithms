// Searching_Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
// Algorithms which search within an iterator range
// 
// find_first_of()
// 
// std::string has member function of this
// 
// string str{"Hello World};
// string vowels{"aeiou"};
// str.find_first_of(vowels);                               returns index of first vowel in string
// 
// there's generic algorithm func, std::find_first_of()
// 
// returns iterator to first vowel
// 
// auto vowel = find_first_0f(cbegin(str), cend(str),cbegin(vowels),cend(vowels));
// if (vowel != cend(str))
//      cout<<"First vowel is: " << *vowel;
// 
// by default == operator of the element type is used
//



#include <iostream>
#include<string>
#include<algorithm>
#include<vector>

int main()
{
    //std::string str{ "Hello World" };
    //std::string vowels{ "aeiou" };
    //std::cout << "String to search: \"" << str << "\"\n";

    //auto vowel = std::find_first_of(std::cbegin(str), std::cend(str), std::cbegin(vowels), std::cend(vowels));

    //if (vowel != std::cend(str))
    //    std::cout << "First vowel is \"" << *vowel << "\" at index \"" 
    //    << std::distance(std::cbegin(str), vowel) << "\"\n";



    //auto vowel2 = std::find_first_of(std::next(vowel), std::cend(str), std::cbegin(vowels), std::cend(vowels));
    //if (vowel2 != std::cend(str))
    //    std::cout << "Next vowel is \"" << *vowel2 << "\" at index \"" 
    //    << std::distance(std::cbegin(str), vowel2) << "\"\n";


    //

    //auto pos = std::adjacent_find(std::cbegin(str), std::cend(str));

    //if (pos != std::cend(str))
    //    std::cout << "Found adjecent elements with value \"" << *pos << "\" at index \"" 
    //    << std::distance(std::cbegin(str), pos) << std::endl;


    ////search_n()
    //// looks for a sequence of n successive elements which have the same given value.
    //// returns an iterator to the first element of the sequence
    ////

    //std::vector<int> vec{ 1,2,2,3,2,3,3 };

    //// looks for a sequence of '2' elements, with the value '3'
    //// returns an iterator to start of the first such sequence
    //auto pos2 = std::search_n(std::cbegin(vec), std::cend(vec), 2, 3);
    //if (pos2 != std::cend(vec))
    //{
    //    std::cout << "Found two elements with value 3 starting at index " 
    //        << std::distance(std::cbegin(vec), pos2) << std::endl;
    //}

    /*
    search() takes 2 iterator ranges
    looks for an occurence of the second iterator range inside the first
    */

    using namespace std;

    string str{ "Hello World" };
    string sub{ "wo" };

    cout << "searching for substring " << sub << std::endl;
    //returns iterator to first element of wo
    auto pos3 = search(
        cbegin(str), 
        cend(str), 
        cbegin(sub), 
        cend(sub));

    if (pos3 != cend(str)) {
        cout << "Found substring \"" << sub << "\" at index " << distance(cbegin(str), pos3) << endl;
    }
    else {
        cout << "no matches found";
    }

    return;
}