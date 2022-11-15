
/* The default constructor, the copy constructor, the copy operator, and the destructor, those are
   all implicit methods that are included in any class even if we have not defined those methods.*/
#include <string>
using namespace std;

class Animal
{
   public:
      Animal(); // default constructor
      Animal(const string & type, const string & name, const string & sound);
      Animal(const Animal &);  // copy constructor
      Animal & operator = (const Animal &);  // copy operator
      ~Animal();  //default constructor

      void print() const;

   private:
      string _type = "";
      string _name = "";
      string _sound = "";
};