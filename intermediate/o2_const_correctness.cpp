#include <iostream>
#include <string>

// A simple class to demonstrate const correctness
class User {
public:
    User(std::string name, int age)
        : name_(std::move(name)), age_(age) {}

    // Const member function:
    // guarantees it will NOT modify the object
    std::string getName() const {
        return name_;
    }

    int getAge() const {
        return age_;
    }

    // Non-const member function:
    // allowed to modify the object
    void setAge(int newAge) {
        age_ = newAge;
    }

    void print() const {
        std::cout << "User{name=" << name_
                  << ", age=" << age_ << "}" << std::endl;
    }

private:
    std::string name_;
    int age_;
};

// Function taking a const reference
// prevents accidental modification and avoids copying
void printUser(const User& user) {
    user.print();
}

// Function returning a const reference
const std::string& getUserName(const User& user) {
    return user.getName();
}

int main() {
    User user("Alice", 30);

    // OK: calling const member functions
    std::cout << "Name: " << user.getName() << std::endl;
    std::cout << "Age: " << user.getAge() << std::endl;

    // OK: calling non-const member function
    user.setAge(31);

    printUser(user);

    const User constUser("Bob", 25);

    // OK: const object can only call const member functions
    std::cout << "Const user name: " << constUser.getName() << std::endl;

    // ❌ This would NOT compile:
    // constUser.setAge(26);

    const std::string& nameRef = getUserName(user);
    std::cout << "User name reference: " << nameRef << std::endl;

    return 0;
}
