#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int a,s;
    string n1,n2;

    public:
        void set_age(int x)
        {
            a=x;
        }
        int get_age()
        {
            return a;
        }
        void set_standard(int y)
        {
            s=y;    
        }
        int get_standard()
        {
            return s;
        }
        void set_first_name(string s1)
        {
            n1=s1;
        } 
        string get_first_name()
        {
            return n1;
        }
        void set_last_name(string s2)
        {
            n2=s2;
        }
        string get_last_name()
        {
            return n2;
        }
        string to_string()
        {
            stringstream x;
            x<<a<<","<<n1<<","<<n2<<","<<s;
            return x.str();
            
            
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
