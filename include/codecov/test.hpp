#include <iostream>

namespace amazing
{

inline std::ostream& awesome( std::ostream& os ) {
  return os << "hello from awesome\n";
}

inline std::ostream& more_awesome_but_not_covered( std::ostream& os, bool flag ) {
  if ( flag )
  {
    return os << "hi, #1 from more_awesome\n";
  }
  else
  {
    return os << "hi, #2 from more_awesome\n";
  }
}
} // namespace amazing

