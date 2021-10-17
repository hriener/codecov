#include <iostream>

namespace amazing
{

inline std::ostream& awesome( std::ostream& os ) {
  return os << "hello from awesome\n";
}

inline std::ostream& more_awesome_but_not_covered( std::ostream& os ) {
  return os << "hi, hello, and how are you? :)) from more_awesome\n";
}
  
} // namespace amazing

