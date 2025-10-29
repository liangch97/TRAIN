#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    int id;
    string name;

public:
    Person() : id(0), name("") {}
    Person(int _id, string _name) : id(_id), name(_name) {}
    virtual ~Person() {}
    virtual double getPay() = 0;
};

class Teacher : public Person {
private:
    int hours;
    static const double hourlyRate;

public:
    Teacher() : Person(), hours(0) {}
    Teacher(int _id, string _name, int _hours) : Person(_id, _name), hours(_hours) {}
    
    virtual double getPay() {
        return hours * hourlyRate;
    }
    
    void show() {
        cout << "职工编号：" << id << "，姓名：" << name << "，当月应发工资：" << getPay() << endl;
    }
};

const double Teacher::hourlyRate = 50.0;

class Hqry : public Person {
private:
    double bonus;

public:
    Hqry() : Person(), bonus(0) {}
    Hqry(int _id, string _name, double _bonus) : Person(_id, _name), bonus(_bonus) {}
    
    virtual double getPay() {
        return 3000 + bonus;
    }
};

double totalPay(Person *p[], int n) {
    double total = 0;
    for (int i = 0; i < n; i++) {
        total += p[i]->getPay();
    }
    return total;
}

int main() {
    Person *pp[4];
    pp[0] = new Teacher(1001, "张三", 40);
    pp[1] = new Teacher(1003, "刘红", 60);
    pp[2] = new Hqry(2001, "王明", 500);
    pp[3] = new Hqry(2008, "李慧", 1200);
    
    ((Teacher *)pp[1])->show();
    cout << "校工资总额为：" << totalPay(pp, 4) << endl;
    
    for (int i = 0; i < 4; i++) {
        delete pp[i];
    }
    
    return 0;
}
