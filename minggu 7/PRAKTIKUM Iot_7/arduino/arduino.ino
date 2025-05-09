#include <Arduino.h>  // Wajib untuk PlatformIO + ESP32

// Deklarasi pin lampu lalu lintas
int lampuMerah = 26;
int lampuKuning = 25;
int lampuHijau = 27;

void setup() {
    Serial.begin(115200);
    Serial.println("Algoritma Lampu Lalu Lintas");

    // Atur pin sebagai OUTPUT
    pinMode(lampuMerah, OUTPUT);
    pinMode(lampuKuning, OUTPUT);
    pinMode(lampuHijau, OUTPUT);
}

void loop() {
    // Lampu Merah ON
    digitalWrite(lampuMerah, HIGH);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Merah ON");
    delay(3000); // 5 detik

    // Lampu Kuning ON
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Kuning ON");
    delay(2000); // 2 detik

    // Lampu Hijau ON
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, LOW);
    digitalWrite(lampuHijau, HIGH);
    Serial.println("Hijau ON");
    delay(3b 000); // 5 detik

    // Lampu Kuning ON lagi sebelum kembali ke merah
    digitalWrite(lampuMerah, LOW);
    digitalWrite(lampuKuning, HIGH);
    digitalWrite(lampuHijau, LOW);
    Serial.println("Kuning ON");
    delay(2000); // 2 detik
}
