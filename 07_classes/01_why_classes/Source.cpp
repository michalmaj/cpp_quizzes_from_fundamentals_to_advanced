/*
 **Goal: sort students by multiple data value
 **
 **student1: Name: Joe Lime, ID#15, Grad. Date: 2019
 **student2: Name: Bob Green, ID#3, Grad. Date: 2020
 **student3: Name: SallyAnne Green , ID#1, Grad. Date: 2017
 **student4: Name: Annie Blue, ID#10, Grad. Date: 2020
 **student5: Name: Jose Lemon, ID#25, Grad. Date: 2016
 */

#include<string>
#include <iostream>
#include <vector>
#include <algorithm>

template<class T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& vec)
{
	for(const auto& e : vec)
	{
        out << e << " ";
	}
    return out;
}

bool comparator_id(const std::pair<std::string, std::pair<int, int>>& p1,
    const std::pair<std::string, std::pair<int, int>>& p2)
{
    return p1.second.first < p2.second.first;
}

bool comparator_year(const std::pair<std::string, std::pair<int, int>>& p1,
    const std::pair<std::string, std::pair<int, int>>& p2)
{
    return p1.second.second < p2.second.second;
}

int main()
{
    //ToDo sort the students by name, then by number, then by gradDate

    std::vector<std::pair<std::string, std::pair<int, int>>> students
    {
        {"Joe Lime", {15, 2019}},
        {"Bob Green", {3, 2020}},
        {"SallyAnne Green", {1, 2017}},
        {"Annie Blue", {10, 2020}},
        {"Jose Lemon", {25, 2016}},
    };

    // Sort by name
    std::cout << "Sort by name:\n";
    std::sort(students.begin(), students.end());
    for (const auto& e : students)
    {

        std::cout << e.first << " " << e.second.first << " " << e.second.second << std::endl;
    }
    std::cout << std::endl;

    // Sort by id
    std::cout << "Sort by id:\n";
    std::sort(students.begin(), students.end(), comparator_id);
    for (const auto& e : students)
    {

        std::cout << e.first << " " << e.second.first << " " << e.second.second << std::endl;
    }
    std::cout << std::endl;

    // Sort by year
    std::cout << "Sort by year:\n";
	std::sort(students.begin(), students.end(), comparator_year);
    for(const auto& e : students)
    {
        
        std::cout << e.first << " " << e.second.first << " " << e.second.second << std::endl;
    }
    std::cout << std::endl;



    return 0;
}