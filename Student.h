#include <string>

class Student {

public:
  Student()
     {
        name= " ";
        age=0;
     }

  void setname(std::string studentname) {

          name=studentname;

   }

  std::string getname() const {

            return name;
      }
  void setage(int studentage) {

        age=studentage;
     }

  int getage() const {
         return age;
   }

  private:
     std::string name;
     int age;
  };

