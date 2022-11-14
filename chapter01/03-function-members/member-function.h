class MemberFunction
{
   public:
      void setValue(const int & value);
      int getValue();
      int getValue() const;
   private:
      int _value = 0;
};