#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.begin(); //Lakukan fungsi ini untuk inisialisasi LCD.
  lcd.backlight();
  lcd.print("adtvnus"); //Fungsi untuk menampilkan text.
  lcd.setCursor(0, 1); //Fungsi untuk memindahkan kursor ke baris x, kolom y.
  lcd.print("Mahasiswa UNRI"); //Fungsi untuk menampilkan text.
}

void loop() {

}

/*
Setelah program di jalankan, LCD akan menampilkan tulisan “Hello World” pada baris pertama. Dan tulisan “Starlectric” pada baris kedua. 
Note : Gunakan LiquidCyrstal_I2C lcd(0x3F, 16, 2) pada baris 4 jika alamat I2C 0x27 tidak dapat berfungsi.
*/
