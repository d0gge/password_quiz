#include "Utils.hpp"
#include <stdlib.h>

namespace utils
{
void ClearConsole()
{
#ifdef _WIN32
  system("cls");
#endif

#ifdef __unix__
  system("clear");
#endif
}
} // namespace utils
