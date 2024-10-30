#ifndef Ndef_h
#define Ndef_h

/* NOTE: To use the Ndef library in your code, don't include Ndef.h
   See README.md for details on which files to include in your sketch.
*/

#include <Particle.h>

void PrintHex(const uint8_t *data, const long numBytes);
void PrintHexChar(const uint8_t *data, const long numBytes);
void DumpHex(const uint8_t *data, const long numBytes, const int blockSize);

#endif