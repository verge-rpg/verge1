#ifndef MIRQ_H
#define MIRQ_H

#include "mtypes.h"

#ifdef DJGPP
typedef __dpmi_paddr *PVI;
#else
typedef void (interrupt *PVI)(void);
#endif

BOOL MIrq_IsEnabled(UBYTE irqno);
BOOL MIrq_OnOff(UBYTE irqno,UBYTE onoff);
#ifdef DJGPP
PVI  MIrq_DJSetHandlerFunc(UBYTE irqno,void (*handler)(), int);
void  MIrq_DJSetHandlerAddr(UBYTE irqno,PVI handler);
#else
PVI  MIrq_SetHandler(UBYTE irqno,PVI handler);
#endif
void MIrq_EOI(UBYTE irqno);

#endif
