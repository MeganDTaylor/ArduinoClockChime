// =====================================================
// WIFI + TIME (ALL-IN-ONE, NO EXTRA FILES)
// =====================================================

#include <WiFi.h>
#include <time.h>

#define WIFI_LED 2 // Built-in LED pin

// ---- WIFI CREDENTIALS ----
const char *WIFI_SSID = "YourSSID";
const char *WIFI_PASS = "YourPassword";

// =====================================================
// Connect to WiFi
// =====================================================
void connectWiFi()
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);

  // Blink while connecting
  while (WiFi.status() != WL_CONNECTED)
  {
    digitalWrite(WIFI_LED, HIGH);
    delay(300);
    digitalWrite(WIFI_LED, LOW);
    delay(300);
  }

  // Solid ON once connected
  digitalWrite(WIFI_LED, HIGH);
}

// =====================================================
// Initialize NTP time
// =====================================================
void initTime()
{
  // Adjust timezone: example is EST (UTC-5)
  configTime(-5 * 3600, 0, "pool.ntp.org", "time.nist.gov");

  Serial.print("Waiting for NTP time");
  time_t now = time(nullptr);
  while (now < 100000)
  { // wait until valid time
    Serial.print(".");
    delay(300);
    now = time(nullptr);
  }
  Serial.println("\nTime synchronized!");
}

// =====================================================
// Helpers for getting time info
// =====================================================
tm getLocalTimeStruct()
{
  time_t now = time(nullptr);
  struct tm t;
  localtime_r(&now, &t);
  return t;
}

int getHour() { return getLocalTimeStruct().tm_hour; }
int getMinute() { return getLocalTimeStruct().tm_min; }
int getSecond() { return getLocalTimeStruct().tm_sec; }
int getDayOfWeek() { return getLocalTimeStruct().tm_wday; } // Sunday = 0

// =====================================================
// Scheduling Functions
// =====================================================

// bool isTimeMonth(int hourCheck, int minuteCheck, int monthCheck) {
//     struct tm timeinfo;
//     if (!getLocalTime(&timeinfo)) return false;
//
//     int currentHour   = timeinfo.tm_hour;
//     int currentMinute = timeinfo.tm_min;
//     int currentMonth  = timeinfo.tm_mon + 1;
//
//     // This 'static' variable is unique to EACH version of this function call
//     // because it "remembers" its state between loops.
//     static int lastFiredHour = -1;
//
//     if (currentHour == hourCheck && currentMinute == minuteCheck && currentMonth == monthCheck) {
//         // Only fire if we haven't fired during THIS specific hour
//         if (lastFiredHour != currentHour) {
//             lastFiredHour = currentHour;
//             return true;
//         }
//     }
//
//     // Reset the lock once the minute has passed so it's ready for tomorrow
//     if (currentMinute != minuteCheck) {
//         lastFiredHour = -1;
//     }
//
//     return false;
// }

bool isTimeMonth(int hourCheck, int minuteCheck, int monthCheck)
{
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo))
    return false;

  int currentHour = timeinfo.tm_hour;
  int currentMinute = timeinfo.tm_min;
  int currentMonth = timeinfo.tm_mon + 1;

  // By combining Hour and Minute into a single 'stamp',
  // we create a unique ID for this specific trigger window.
  static int lastFiredStamp = -1;
  int currentStamp = (currentHour * 100) + currentMinute;

  if (currentHour == hourCheck && currentMinute == minuteCheck && currentMonth == monthCheck)
  {
    if (lastFiredStamp != currentStamp)
    {
      lastFiredStamp = currentStamp;
      return true;
    }
  }
  return false;
}

bool isTimeNotMonth(int hourCheck, int minuteCheck, int monthCheck)
{
  struct tm timeinfo;
  if (!getLocalTime(&timeinfo))
    return false;

  int currentHour = timeinfo.tm_hour;
  int currentMinute = timeinfo.tm_min;
  int currentMonth = timeinfo.tm_mon + 1;

  static int lastFiredStamp = -1;
  int currentStamp = (currentHour * 100) + currentMinute;

  if (currentHour == hourCheck && currentMinute == minuteCheck && currentMonth != monthCheck)
  {
    if (lastFiredStamp != currentStamp)
    {
      lastFiredStamp = currentStamp;
      return true;
    }
  }
  return false;
}
