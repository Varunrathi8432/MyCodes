#include <iostream>
using namespace std;

// ****************************** VIRTUAL BASE CLASS ********************************

// VIRTUAL BASE CLASS
class student
{
    int roll_no;
    int id;

public:
    void set_detail(int, int);
    void get_detail(void);
};

void student ::set_detail(int a, int b)
{
    roll_no = a;
    id = b;
}

void student ::get_detail()
{
    cout << "Roll no oF student : " << roll_no << endl
         << "id oF student : " << id << endl;
}

class test : virtual public student
{
protected:
    int maths;
    int physics;

public:
    void set_marks(int, int);
    void get_marks();
};

void test :: set_marks(int m, int p)
{
    maths = m;
    physics = p;
}

void test :: get_marks()
{
    cout << "Marks in Maths : " << maths << endl
         << "Marks in Physics : " << physics << endl;
}

class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int a);
    void get_score();
};

void sports :: set_score(int a)
{
    score = a;
}

void sports :: get_score()
{
    cout << "Score in sports : " << score << endl;
}

class result : public test, public sports
{
    int total;

public:
    void display()
    {
        total = maths + physics + score;
        get_detail();
        get_marks();
        get_score();
        cout << "total result oF student : " << total;
    }
};

int main()
{
    result res;
    res.set_detail(46, 2);
    res.set_marks(98, 93);
    res.set_score(99);
    res.display();
    return 0;
}