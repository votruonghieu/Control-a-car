#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

// Thông tin mạng Wi-Fi
char ssid[] = "your-SSID";
char password[] = "your-PASSWORD";

// Mã thông báo Blynk (Auth Token) từ dự án Blynk của bạn
char auth[] = "your-Auth-Token";

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, password);
}

void loop() {
  Blynk.run();
}

BLYNK_WRITE(V0) {
  int value = param.asInt();
  if (value == 1) {
    // Điều khiển xe tiến lên
  } else {
    // Dừng xe
  }
}
