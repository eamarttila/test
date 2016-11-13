#include <iostream>
#include <stdlib.h>

/*
 * Main routine that does little or nothing.
 */
int main(int nArg, char **arg)
{
  if (nArg > 1) {
    int elemStructSize = 372;
    int nElem = (int)atof(arg[1]);

    for(int nElem = 5000000; nElem < 15000000; nElem+= 1000) {

      std::cerr << "running with " << nElem << " elems:  ";
      int bufferSize = nElem*elemStructSize;
      std::cerr << "buffer size = " << bufferSize << "\n";
    }
  }
  else {
    std::cerr << "Usage: " << arg[0] << " nElem\n"; 
  }

  return 0;
}
