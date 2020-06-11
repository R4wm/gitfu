#include <iostream>
#include <string>
#include "TutorialConfig.h"

#ifdef USE_MYMATH
#  include "MathFunctions.h"
#endif

// #include "is2/support/trace.h"

int main(int argc, char* argv[]){

  std::cout << "argc: " << argc << std::endl;
  
  if (argc > 0 ) {
    // report version
    std::cout << "VERSION: " << stuff1_VERSION_MINOR << std::endl;
    std::cout << "argv[1]: " << argv[1] << std::endl;
  }

  std::string something = "3";
  const double inputValue = std::stod(something);

  std::cout << "string to decimal: " << inputValue << std::endl;
  std::cout << "argv: " << *argv << std::endl;

  // Math stuff
#ifdef USE_MYMATH
  printf("\nUSE_MYMATH is ON :)\n");
  const double mathResult = mysqrt(inputValue);
  std::cout << "mathResult: " << mathResult << std::endl;
#else
  printf("USE_MYMATH is OFF!");
#endif


  printf("\nDONE\n");
}
