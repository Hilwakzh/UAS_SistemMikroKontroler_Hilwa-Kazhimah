
Nama : Hilwa Kazhimah Khairunnisa 
Kelas : TIF K 23B 
Nim : 23552011399

# 💧 Pendeteksi Kebocoran Air Berbasis IoT Menggunakan ESP32 dan ThingSpeak

## Deskripsi

Proyek ini merupakan simulasi sistem pendeteksi kebocoran air berbasis Internet of Things (IoT) menggunakan **ESP32**, **ThingSpeak**, dan **Wokwi**. Karena Wokwi belum menyediakan sensor kebocoran air, simulasi menggunakan **potentiometer** sebagai pengganti sensor untuk menghasilkan nilai analog.

Ketika nilai sensor melebihi batas yang telah ditentukan, sistem akan menyalakan **LED** dan **buzzer** sebagai indikator kebocoran, kemudian mengirimkan data ke **ThingSpeak** sehingga dapat dipantau secara real-time.

## Fitur

* Simulasi pendeteksi kebocoran air menggunakan potentiometer.
* Monitoring data sensor secara real-time melalui ThingSpeak.
* LED menyala saat terjadi kebocoran.
* Buzzer berbunyi sebagai alarm.
* Menampilkan nilai sensor pada Serial Monitor.

## Komponen

* ESP32 DevKit V1
* Potentiometer (Simulasi Sensor Air)
* LED Merah
* Buzzer
* Kabel Jumper (Virtual)
* Wokwi Simulator
* ThingSpeak

## Cara Kerja

1. ESP32 terhubung ke jaringan WiFi Wokwi-GUEST.
2. Potentiometer menghasilkan nilai analog sebagai simulasi sensor kebocoran air.
3. ESP32 membaca nilai sensor secara terus-menerus.
4. Jika nilai sensor lebih dari **2000**, sistem akan:

   * Menyalakan LED.
   * Mengaktifkan buzzer.
   * Mengirim data ke ThingSpeak dengan status **Bocor**.
5. Jika nilai sensor kurang dari atau sama dengan **2000**, sistem akan:

   * Mematikan LED.
   * Mematikan buzzer.
   * Mengirim data ke ThingSpeak dengan status **Aman**.

## Struktur Proyek

```text
.
├── sketch.ino
├── diagram.json
├── libraries.txt
└── README.md
```

## Cara Menjalankan

1. Buka proyek di Wokwi.
2. Pastikan library **ThingSpeak** sudah ditambahkan pada `libraries.txt`.
3. Masukkan **Channel ID** dan **Write API Key** dari ThingSpeak ke dalam `sketch.ino`.
4. Jalankan simulasi.
5. Putar potentiometer untuk mensimulasikan kondisi aman atau kebocoran.
6. Amati perubahan pada LED, buzzer, Serial Monitor, dan grafik di ThingSpeak.

## Hasil

* Nilai sensor ditampilkan pada Serial Monitor.
* LED dan buzzer aktif saat terjadi kebocoran.
* Data sensor berhasil dikirim ke ThingSpeak dan ditampilkan dalam bentuk grafik secara real-time.

## Kesimpulan

Proyek ini berhasil mensimulasikan sistem pendeteksi kebocoran air berbasis IoT menggunakan ESP32 dan ThingSpeak. Meskipun menggunakan potentiometer sebagai pengganti sensor kebocoran air pada Wokwi, sistem mampu mendeteksi perubahan nilai sensor, memberikan peringatan melalui LED dan buzzer, serta mengirimkan data ke platform ThingSpeak untuk monitoring secara real-time.

---

**Dibuat untuk tugas simulasi IoT menggunakan Wokwi, ESP32, dan ThingSpeak.**

   
## ScreenShot Wokwi & ThingSpeak
   
<img width="1886" height="923" alt="Screenshot 2026-07-04 073033" src="https://github.com/user-attachments/assets/67fba563-e5de-4b2d-aaf9-206abca7f4f6" />
<img width="1582" height="657" alt="Screenshot 2026-07-04 072954" src="https://github.com/user-attachments/assets/2597cb97-c3a9-4c06-b1d4-3cc00748c374" />

<img width="1890" height="901" alt="Screenshot 2026-07-04 073248" src="https://github.com/user-attachments/assets/d99d51c3-d514-46d8-8fdf-75bf5e94309a" />
<img width="1512" height="632" alt="Screenshot 2026-07-04 073303" src="https://github.com/user-attachments/assets/78b1efea-f668-43ce-9859-a03e5ba0d2b3" />

## Link WokWi
https://wokwi.com/projects/468573347712949249

## Link ThingSpeak
https://thingspeak.mathworks.com/channels/3421495/private_show

## Link Youtube (Video Demo)
   https://youtu.be/IYm_fPIXIZk
