//
// automatically generated by spin2cpp v1.03 on Sun Jun 02 19:48:38 2013
// spin2cpp SPI_Spin.spin 
//

#ifndef SPI_H_Defined__
#define SPI_H_Defined__

#include <stdint.h>

class SPI {
public:
  static const int Msbpre = 0;
  static const int Lsbpre = 1;
  static const int Msbpost = 2;
  static const int Lsbpost = 3;
  static const int Lsbfirst = 4;
  static const int Msbfirst = 5;
  int32_t	Start(int32_t _clockdelay, int32_t _clockstate);
  int32_t	Shiftout(int32_t Dpin, int32_t Cpin, int32_t Mode, int32_t Bits, int32_t Value);
  int32_t	Shiftin(int32_t Dpin, int32_t Cpin, int32_t Mode, int32_t Bits);
  int32_t	Postclock(int32_t _cpin);
  int32_t	Preclock(int32_t _cpin);
private:
  int32_t	Clockdelay, Clockstate;
};

#endif
