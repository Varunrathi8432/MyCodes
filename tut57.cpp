#include <iostream>
#include <cstring>

// ************************ virtual Functions **********************

using namespace std;
class varunyoutube
{
protected:
    string title;
    float rating;

public:
    varunyoutube(string s, float r)
    {
        title = s;
        rating = r;
    }
    void display() {}
};

class varunvideo : public varunyoutube
{
    float vdlength;

public:
    varunvideo(string s, float r, float vd) : varunyoutube(s, r)
    {
        vdlength = vd;
    }
    void display()
    {
        cout << "The title oF video is : " << title << endl;
        cout << "The rating oF video is : " << rating << " out oF 5 star \n";
        cout << "The length oF video is : " << vdlength << "  minutes \n";
    }
};
class varuntext : public varunyoutube
{
    int words;

public:
    varuntext(string s, float r, int w) : varunyoutube(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "The title oF text is : " << title << endl;
        cout << "The rating oF text is : " << rating << " out oF 5 star \n";
        cout << "The words in text is : " << words << endl;
    }
};

int main()
{
    string title;
    title = "django language video";
    varunvideo vd(title, 4.3, 15.30);
    // vd.display();

    title = "django language text";
    varuntext tx(title, 3.8, 1530);
    // tx.display();

    varunyoutube *tut[2];
    tut[0] = &vd;
    tut[1] = &tx;

    tut[0]->display();
    tut[1]->display();

    return 0;
}