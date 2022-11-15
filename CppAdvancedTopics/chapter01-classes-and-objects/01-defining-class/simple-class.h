class SimpleClass 
{
   public:
      SimpleClass();
      ~SimpleClass();
      void setValue(const int & value);
      int getValue() const;

   private:
      int _value = 0;
};