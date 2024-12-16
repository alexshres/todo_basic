#include <vector>
#include <string>

struct entry {
    std::string name;
    std::string description;
    std::string tag;

    int priority;
    bool completed;
};


class ToDo {
    private:
        std::vectory<entry> my_list;

    public:
        ToDo();
        bool add(entry& an_entry);
        bool complete(std::string& a_name);
        bool remove(std::string& a_name);
        std::vector<entry> find(std::string& tag) const;
        
        void display() const;
};
