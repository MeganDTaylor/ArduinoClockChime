// =====================================================
// WIFI + TIME (ALL-IN-ONE, NO EXTRA FILES)
// =====================================================

#include <WiFi.h>
#include <time.h>

// ---- WIFI CREDENTIALS ----
const char *WIFI_SSID = "ssid";
const char *WIFI_PASS = "password";

// ---- INTERNAL tracking for "run once" events ----
int lastMinuteChecked = -1;
int lastHourChecked = -1;

// =====================================================
// Connect to WiFi
// =====================================================
void connectWiFi()
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(WIFI_SSID, WIFI_PASS);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(300);
  }
  Serial.println("\nWiFi connected!");
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

// Fires once per day at EXACT hour/minute
bool isTime(int hour, int minute)
{
  tm t = getLocalTimeStruct();

  if (t.tm_hour == hour && t.tm_min == minute)
  {
    if (lastMinuteChecked != minute)
    {
      lastMinuteChecked = minute;
      return true;
    }
  }
  return false;
}

// Fires once per week at exact time + exact day
bool isTimeAndDay(int hour, int minute, int day)
{
  tm t = getLocalTimeStruct();

  if (t.tm_wday == day && t.tm_hour == hour && t.tm_min == minute)
  {
    if (lastMinuteChecked != minute)
    {
      lastMinuteChecked = minute;
      return true;
    }
  }
  return false;
}

// Fires once every hour on the hour (hh:00:00)
bool isHourly()
{
  tm t = getLocalTimeStruct();

  if (t.tm_min == 0 && t.tm_sec == 0)
  {
    if (lastHourChecked != t.tm_hour)
    {
      lastHourChecked = t.tm_hour;
      return true;
    }
  }
  return false;
}
