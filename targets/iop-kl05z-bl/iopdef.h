#ifndef IOPDEF_H_
#define IOPDEF_H_

#include "mbed.h"

#define JITPCB_IOPDEF_NO_PULLDOWN

namespace jitpcb {
namespace iopdef {
// TODO: perhaps move these into JITPCB proper
const PinName kBootInPin = PTB6;
const PinName kBootOutPin = PTA7;
const PinName kStatusLedPin = PTB11;
}
}

#endif
