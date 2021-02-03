class MySin{
public:
  MySin();
  MySin(double x);
  MySin(const MySin &obj);
  double value();
  void setX(double);
  double getX();
 private:
 double mX;
 }
