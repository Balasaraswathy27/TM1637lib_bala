#include "tm1637lib_done.c"
void setup() {
  
  tm_init();
}

void loop() {
  
   for(int i=0;i<1000;i++){
  write_data(i);
  }
}
