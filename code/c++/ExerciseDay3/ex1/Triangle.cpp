#include "Triangle.h"
int Triangle::numTri = 0;

Triangle::~Triangle() {
  numTri--;
  std::cout << "Triangle Destructor\n";
}

Triangle::Triangle(double a, double b, double c, string color)
  :ColoredShape(color)
{
  this->a = a;
  this->b = b;
  this->c = c;
  numTri++;
}

double
Triangle::getArea(void) {
  double s = 1./2.*(a + b + c);
  return std::sqrt(s*(s-a)*(s-b)*(s-c));
}

void
Triangle::printArea(std::ostream & os) {
  os << "Triangle: color: " << this->getColor() << ", area: "
     << this->getArea() << ", numTri: " << numTri << "\n";
}
