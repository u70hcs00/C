class Circle
{
public:
  Circle();
  Circle(double);
  ~Circle(); // Destructor
  double getArea() const;
  double getRadius() const;
  void setRadius(double);
  static int getNumberOfObjects();

private:
  double radius;
  static int numberOfObjects;
};

