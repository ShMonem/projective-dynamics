
#include <string>
#include <sstream>
#include<iomanip>

inline std::string float_to_str(float value)
{
    std::stringstream stream;
    stream << std::setprecision(std::numeric_limits<float>::digits10 + 1);
    stream << value;
    return stream.str();
}