#include <string>
using namespace std;
class Deportes{
    private:
        string name;
        int year;
        string practice;
    public:
        string getName () {
            return name;
        }
        int getYear () {
            return year;
        }
        string getPractice () {
            return practice;
        }
        // Stters
        void setName (string nm) {
            name = nm;
        }
        void setYear (int y) {
            year = y;
        }
        void setPractice (string prac) {
            practice = prac;
        }
};
