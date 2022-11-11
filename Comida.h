#include <string>
using namespace std;
class Comida{
    private:
        string name;
        float price;
    public:
        string getName () {
            return name;
        }
        float getPrice () {
            return price;
        }
        // Stters
        void setModel (string nm) {
            name = nm;
        }
        void setPrice (float pri) {
            price = pri;
        }
};
