#include <iostream>
#include "todo.h"

ToDo::ToDo() {}

bool ToDo::add(entry& an_entry) 
{
    my_list.push_back(an_entry);    
    return true;
}

void ToDo::add()
{
    entry new_entry;
    
    std::cout << "Please enter the name of your todo item\n";
    std::getline(std::cin, new_entry.name);
    
    std::cout << "Please enter the description\n";
    std::getline(std::cin, new_entry.description);

    std::cout << "Please enter the priority level\n";
    std::cin >> new_entry.priority;

    new_entry.completed = false;

    bool ret = add(new_entry);
    if (ret)
        std::cout << "Successfully added new todo item!\n";
    else
        std::cout << "Error adding item, please try again\n";

    return;
}


void ToDo::display() const
{
    for (auto ent: my_list) {
        std::string comp;
        if (ent.completed)
            comp = "Completed";
        else
            comp = "To Do";

        std::cout << "Name: " << ent.name 
                  << "\nDescription: " << ent.description
                  << "\nPriority: " << ent.priority
                  << "\nCompleted: " << comp << std::endl;
    }

    return;

}
