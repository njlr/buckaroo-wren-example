#include <iostream>

// Wren exposes a C API
extern "C" {
#include <wren.h>
}

void write(WrenVM* vm, const char* str) {
  std::printf("%s", str);
}

int main() {

  WrenConfiguration config;
  wrenInitConfiguration(&config);
  config.writeFn = write;

  WrenVM* vm = wrenNewVM(&config);

  WrenInterpretResult result = wrenInterpret(vm, "System.print(\"Hello, world. \")");

  wrenFreeVM(vm);

  return 0;
}
