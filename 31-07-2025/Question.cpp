// #include <iostream>
// #include <vector>
// using namespace std;

// class Logger
// {
// public:
//     class LogEntry
//     {
//         const string timestamp;
//         const string message;

//     public:
//         LogEntry(const string &time, const string &msg) : timestamp(time), message(msg) {}
//         const string &getTimestamp() const { return timestamp; }
//         const string &getMessage() const { return message; }
//     };

// private:
//     vector<LogEntry> logs;

// public:
//     void addEntry(const string &time, const string &msg)
//     {
//         logs.emplace_back(time, msg);
//     }

//     void displayEntries() const
//     {
//         for (const auto &log : logs)
//         {
//             cout << "[" << log.getTimestamp() << "] " << log.getMessage() << endl;
//         }
//     }
// };

// int main()
// {

//     /*
//     1. Design a Read-Only Logger System
// Problem:
// Create a class Logger with a nested class LogEntry.
// •	Each LogEntry should store a timestamp and a message.
// •	The outer class can add entries, and also display all entries using a const member function.
// •	Restrict modification of LogEntry data once it is created (use const properly).
// What It Tests:
// •	Nested class design
// •	const constructor arguments
// •	const member function for viewing

//     */

//     Logger logger;
//     logger.addEntry("2025-07-31 15:00", "System started");
//     logger.addEntry("2025-07-31 15:10", "User logged in");
//     logger.displayEntries();
//     return 0;
// }

















// #include <iostream>
// #include <vector>
// using namespace std;

// class Bank {
// public:
//     class Locker {
//         const int lockerNumber;
//         const string password;
//     public:
//         Locker(int number, const string& pass) : lockerNumber(number), password(pass) {}

//         int getLockerNumber() const { return lockerNumber; }
//         const string& getPassword() const { return password; }

//         friend class Bank;
//     };

// private:
//     vector<Locker> lockers;

// public:
//     void addLocker(int number, const string& pass) {
//         lockers.emplace_back(number, pass);
//     }

//     void viewLockers() const {
//         for (const auto& l : lockers) {
//             cout << "Locker No: " << l.lockerNumber << " [Password Protected]" << endl;
//         }
//     }
// };

// int main() {

//     /*
//     2. Bank Locker Access
// Problem:
// Create a class Bank with a nested class Locker.
// •	A locker is initialized with a locker number and password (cannot be changed after creation).
// •	Expose a const function in the outer class to view locker info without allowing modification.
// •	Make sure the outer class can access private members of the inner class.
// What It Tests:
// •	const constructor and member variables
// •	outer-inner class access rules
// •	information hiding


//     */

//     Bank b;
//     b.addLocker(101, "abc123");
//     b.addLocker(102, "xyz456");
//     b.viewLockers();
//     return 0;
// }


















// #include <iostream>
// #include <vector>
// using namespace std;

// class Container {
//     vector<int> data;

// public:
//     void add(int val) { data.push_back(val); }

//     class Iterator {
//         const vector<int>& ref;
//         size_t index;
//     public:
//         Iterator(const vector<int>& d) : ref(d), index(0) {}

//         bool hasNext() const { return index < ref.size(); }
//         void next() { if (hasNext()) index++; }
//         int current() const { return ref[index]; }
//     };

//     Iterator begin() const {
//         return Iterator(data);
//     }
// };

// int main() {

//     /*
    
//     3. Const Safe Iterator Inside a Container
// Problem:
// Design a class Container with a nested class Iterator.
// •	The Iterator should be able to iterate over items in the container.
// •	Add a const version of the begin() method.
// •	Ensure Iterator has a const current() method to return the value being pointed to.
// What It Tests:
// •	const correctness in traversal
// •	nested class iterators
// •	member functions returning const values

//     */


//     Container c;
//     c.add(10);
//     c.add(20);
//     c.add(30);

//     Container::Iterator it = c.begin();
//     while (it.hasNext()) {
//         cout << it.current() << " ";
//         it.next();
//     }
//     return 0;
// }












// #include <iostream>
// using namespace std;

// class ConfigManager {
// public:
//     class Configuration {
//         const string mode;
//         const int maxUsers;
//     public:
//         Configuration(const string& m, int u) : mode(m), maxUsers(u) {}

//         const string& getMode() const { return mode; }
//         int getMaxUsers() const { return maxUsers; }
//     };

// private:
//     const Configuration config;

// public:
//     ConfigManager(const string& mode, int users) : config(mode, users) {}

//     const Configuration& getConfig() const {
//         return config;
//     }
// };

// int main() {

//     /*
//     4. Compiler Enforced Read-Only Config
// Problem:
// Design a class ConfigManager with a nested class Configuration.
// •	The nested class should have only const getter functions.
// •	Once a configuration is set via constructor, it cannot be changed.
// •	Use a const object of Configuration inside ConfigManager.
// What It Tests:
// •	const objects and access
// •	const member functions
// •	enforcing immutability using nested classes

    
//     */


//     ConfigManager manager("Production", 100);
//     const ConfigManager::Configuration& c = manager.getConfig();
//     cout << "Mode: " << c.getMode() << ", Max Users: " << c.getMaxUsers() << endl;
//     return 0;
// }














// #include <iostream>
// using namespace std;

// class System {
// public:
//     class Module {
//         string name;
//     public:
//         Module(const string& n) : name(n) {}
//         const string& getName() const { return name; }
//     };

// private:
//     Module* module;

// public:
//     System(const string& name) {
//         module = new Module(name);
//     }

//     ~System() { delete module; }

//     const Module* getModule() const {
//         return module;
//     }
// };

// int main() {


//     /*
//     5. Const Object Holding Pointer to Nested Class
// Problem:
// Create a class System with a nested class Module.
// •	The outer class holds a pointer to the inner class.
// •	Create a const System object and try accessing Module’s data via a const pointer.
// •	Observe and explain what operations are allowed and not allowed.
// What It Tests:
// •	Const object behavior
// •	pointer-to-const and const-pointer usage
// •	nested class pointer access through const object

    
    
//     */


//     const System sys("Authentication");
//     cout << "Module Name: " << sys.getModule()->getName() << endl;

//     // sys.getModule()->name = "X"; // ❌ error: private member + const
//     return 0;
// }









// #include <iostream>
// #include <vector>
// using namespace std;

// class Notebook {
// public:
//     class Page {
//         const string content;
//     public:
//         Page(const string& c) : content(c) {}
//         const string& getContent() const { return content; }

//         friend class Notebook;
//     };

// private:
//     vector<Page> pages;

// public:
//     void addPage(const string& content) {
//         pages.emplace_back(content);
//     }

//     void printPages() const {
//         for (const auto& p : pages) {
//             cout << p.getContent() << endl;
//         }
//     }
// };

// int main() {

//     /*
//     6. Protect Nested Class Using Const
// Problem:
// Design a class Notebook with a nested class Page.
// •	Pages should be read-only once added to the notebook.
// •	Implement a const function in Notebook to print all page content.
// •	Prevent any external class from modifying Page objects.
// What It Tests:
// •	const-correctness in function design
// •	encapsulation with nested classes
// •	use of private + const to enforce safety

    
//     */


//     Notebook nb;
//     nb.addPage("Page 1: Intro to C++");
//     nb.addPage("Page 2: Nested Classes");
//     nb.printPages();
//     return 0;
// }
















// #include <iostream>
// using namespace std;

// class School {
// public:
//     class Student {
//         const string name;
//         const int id;
//     public:
//         Student(const string& n, int i) : name(n), id(i) {}

//         const string& getName() const { return name; }
//         int getId() const { return id; }
//     };

// private:
//     Student student;

// public:
//     School(const string& name, int id) : student(name, id) {}

//     const Student& getStudent() const {
//         return student;
//     }
// };

// int main() {

//     /*
//     7. Return Const Object of Nested Class
// Problem:
// In a class School, the nested class Student stores student info.
// •	From the outer class, return a const Student object using a function.
// •	Try modifying the returned object and observe compiler behavior.
// What It Tests:
// •	Returning const objects from functions
// •	immutability and compiler protection
// •	nested object handling

//     */



//     School s("Aryan", 42);
//     const School::Student& st = s.getStudent();
//     cout << "Student Name: " << st.getName() << ", ID: " << st.getId() << endl;

//     // st.name = "New Name"; ❌ not allowed (const member)
//     return 0;
// }










