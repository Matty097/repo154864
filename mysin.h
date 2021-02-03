#ifndef MYSIN_H
#define MYSIN_H
/**Klasa */
class MySin{
/** Public*/
public:
/**1 */
  MySin();
/**2 */
  MySin(double x);
/**3 */
  MySin(const MySin &obj);
/**4 */
  double value();
/**5 */
  void setX(double);
/**6 */
  double getX();
/**7 */
 private:
/**Private */
 double mX;
 }
 #endif // MYSIN_H