#include <iostream>
using namespace std;

class baseClass final {
    public :
    virtual void perkenalan(){
        cout <<"hallo saya function dari base class";
    }
};

class baseClass3 {
    public :
    virtual void perkenalan(){
        cout <<"hallo saya function dari base class";
        }
};

class derivedClass : public baseClass3  {
    public :
    void perkenalanZaki(){
    cout << "hallo saya function dari derived class";
    }
};

int main() {
derivedClass a;
a.perkenalan();

return 0;

}

