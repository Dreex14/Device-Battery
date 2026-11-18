#pragma once
#include <windows.h>

#include <string>

namespace report {

// Extra sections for `--dump`: HID devices that could not be opened, every USB device
// (including ones without a HID interface) and the Bluetooth devices Windows knows about.
std::wstring DumpExtras();

}  // namespace report
