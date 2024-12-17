#include <queue>
#include <vector>
#include <string>


struct Compare {
    bool operator()(const entry& an_entry, const entry& an_entry_2) const {
        return an_entry.priority < an_entry_2.priority;
    }
};

struct entry {
    std::string name;
    std::string description;
    std::string tag;

    int priority;
    bool completed;
};


class ToDo {
    private:
//        std::priority_queue<entry, std::vector<entry>, Compare> my_list;
        std::vector<entry> my_list;
    public:
        ToDo();
        bool add(entry& an_entry);
        bool complete(std::string& a_name);
        bool remove(std::string& a_name);
        std::vector<entry> find(std::string& tag) const;
        std::vector<entry> find(bool complete) const;
        
        void display() const;
};
