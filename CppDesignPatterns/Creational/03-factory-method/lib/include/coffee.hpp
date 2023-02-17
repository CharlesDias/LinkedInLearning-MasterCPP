#pragma once

#include <string>

class Coffee
{
public:
   std::string getType() const;

protected:
   void setType(std::string_view type);

private:
   std::string _type;
};