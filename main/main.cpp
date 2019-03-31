#include "M5StickC.h"

extern "C" {
  void app_main();
}

void app_main()
{
    M5.begin();
    M5.Lcd.printf("Hello, world");
}
