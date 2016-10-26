// Programmer: Dhanush Patel
// Programmer's ID: 1553428

#ifndef SHAPES_V_5_ISHAPES_H
#define SHAPES_V_5_ISHAPES_H

#include <string>
#include <vector>
using namespace std;

#include <cstdlib>

void checkShape(vector<string>&, vector<const void*>&, vector<string>&);
void calcShape(vector<string>&, vector<const void*>&, vector<string>&);

struct Shape{

};

struct Square : public Shape{
  Square(const vector<string>&);
  void output(ostream&) const;
  Square& operator=(const Square&);

protected:
  const double side;
};

struct Cube : public Square, public Shape {
  Cube(const vector<string>& t) : Square(t){}
  void output(ostream&) const;
  Cube& operator=(const Cube&);
};

struct Rectangle : public Shape{
  Rectangle(const vector<string>&);
  void output(ostream&) const;
  Rectangle& operator=(const Rectangle&);

protected:
  const double length;
  const double width;
};

struct Box : public Rectangle, public Shape{
  Box(const vector<string>& t) : Rectangle(t), height(t.size() >= 3 ? atof(t.at(3).c_str()) : 0){}
  void output(ostream&) const;
  Box& operator=(const Box&);

protected:
  const double height;
};

struct Circle : public Shape{
  Circle(const vector<string>&);
  void output(ostream&) const;
  Circle& operator=(const Circle&);

protected:
  const double radius;
};

struct Cylinder : public Circle, public Shape{
  Cylinder(const vector<string>& t) : Circle(t), height(t.size() >= 2 ? atof(t.at(2).c_str()) : 0){}
  void output(ostream&) const;
  Cylinder& operator=(const Cylinder&);

protected:
  const double height;
};

struct Triangle : public Shape{
  Triangle(const vector<string>&);
  void output(ostream&) const;
  Triangle& operator=(const Triangle&);

protected:
  const double side;
};

struct Prism : public Triangle, public Shape{
  Prism(const vector<string>& t) : Triangle(t), height(t.size() >= 2 ? atof(t.at(2).c_str()) : 0){}
  void output(ostream&) const;
  Prism& operator=(const Prism&);

protected:
  const double height;
};

#endif //SHAPES_V_5_ISHAPES_H
