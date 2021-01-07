#ifndef _TRIANGLE
#define _TRIANGLE

#include <cmath>
#include "ColoredShape.h"

class Triangle: public ColoredShape {
 public:
  Triangle(double a, double b, double c, string color);
  ~Triangle();
  double getArea(void);
  void printArea(std::ostream & os);

 protected:

 private:
  double a;
  double b;
  double c;
  static int numTri;
};

#endif // _TRIANGLE

  
