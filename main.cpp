#include <iostream>

using namespace std;

class Student {
    public:
        string name;
        int age;
        string address;
        string phone;
        string email;
        string department;

    public:
        Student() {
            name = "";
            age = 0;
            address = "";
            phone = "";
            email = "";
            department = "";
        };

        Student(string name, int age, string address, string phone, string email, string department) {
            this->name = name;
            this->age = age;
            this->address = address;
            this->phone = phone;
            this->email = email;
            this->department = department;
        };

        void setInfo() {
            cout << "Enter name: "; getline(cin, this->name);
            cout << "Enter age: "; cin >> this->age;
            cout << "Enter address: "; getline(cin, this->address);
            cout << "Enter phone: "; getline(cin, this->phone);
            cout << "Enter email: "; getline(cin, this->email);
            cout << "Enter department: "; getline(cin, this->department);
        }

        void displayInfo() {
            cout << name << " student information" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Address: " << address << endl;
            cout << "Phone: " << phone << endl;
            cout << "Email: " << email << endl;
            cout << "Department: " << department << endl;
        };
};

class Circle {
    public:
        double radius;

    public:
        Circle() {
            radius = 0;
        };

        Circle(double radius) {
            this->radius = radius;
        };

        double getArea() {
            return 3.14 * radius * radius;
        };

        double getPerimeter() {
            return 2 * 3.14 * radius;
        };
};

class bankAccount {
    public:
        string accountNumber;
        string accountName;
        double balance;

    public:
        bankAccount() {
            accountNumber = "";
            accountName = "";
            balance = 0;
        };

        bankAccount(string accountNumber, string accountName, double balance) {
            this->accountNumber = accountNumber;
            this->accountName = accountName;
            this->balance = balance;
        };

        void deposit(double amount) {
            balance += amount;
        };

        void withdraw(double amount) {
            if (balance >= amount) {
                balance -= amount;
            } else {
                cout << "Not enough money to withdraw" << endl;
            }
        };

        void displayInfo() {
            cout << "Account number: " << accountNumber << endl;
            cout << "Account name: " << accountName << endl;
            cout << "Balance: " << balance << endl;
        };
};

int main() {
    Student khang("Khang", 20, "Hanoi", "0123456789", "khang@gmail.com", "CS");
    Student huy("Huy", 21, "Hanoi", "0123456789", "huy@gmail.com", "EE");

    Student studentClass[2] = {khang, huy};

    khang.displayInfo();
    return 0;
}
