#include "pxt.h"

namespace myBlocks
{
  
   //%
    void cToF()   
    {  

    uBit.display.scroll("HELLO WORLD!",50);

    release_fiber();
    
    }


    float fToC(float value)
    {   
        return (value - 32.0) / 1.8;
    }
} // namespace myBlocks
// Documentation on defining PXT blocks:
// https://www.pxt.io/defining-blocks

