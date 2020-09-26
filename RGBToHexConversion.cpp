#include <sstream>
#include <iomanip>

class RGBToHex
{
  static std::string ToHex(int c){
    if(c < 0) return "00";
    else if(c > 255) return "FF";
    std::ostringstream hex;
    hex << std::uppercase << std::setfill('0') << std::hex << std::setw(2) << c;
    return hex.str();
  }
  public:
  static std::string rgb(int r, int g, int b){
      return ToHex(r) + ToHex(g) + ToHex(b);
  }
};
