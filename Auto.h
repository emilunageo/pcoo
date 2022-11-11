#include <string>
using namespace std;
class Auto{
    private:
        string model;
        int year;
        float price;
    public:
        string getModel () {
            return model;
        }
        int getYear () {
            return year;
        }
        float getPrice () {
            return price;
        }
        // Stters
        void setModel (string mod) {
            model = mod;
        }
        void setYear (int y) {
            year = y;
        }
        void setPrice (float pri) {
            price = pri;
        }
};
