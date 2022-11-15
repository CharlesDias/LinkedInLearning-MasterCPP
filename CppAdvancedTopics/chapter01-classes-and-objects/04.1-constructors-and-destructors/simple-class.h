
/* The default constructor, the copy constructor, the copy operator, and the destructor, those are
   all implicit methods that are included in any class even if we have not defined those methods.*/

class SimpleClass
{
   public:
      void setValue(const int & value);
      int getValue() const;

   private:
      int _value = 0;
};