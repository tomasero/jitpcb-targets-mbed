#ifndef IOPDEF_H_
#define IOPDEF_H_

#include "mbed.h"

namespace jitpcb {
namespace iopdef {
// TODO: perhaps move these into JITPCB proper
const PinName kBootInPin = D3;
const PinName kBootOutPin = D6;
const PinName kStatusLedPin = LED1;
}
}

#endif
