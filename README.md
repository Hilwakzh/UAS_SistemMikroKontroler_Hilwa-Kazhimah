Pendeteksi Kebocoran Air Berbasis IoT Menggunakan ESP32 dan ThingSpeak

Nama : Hilwa Kazhimah Khairunnisa 

Kelas : TIF K 23B 

Nim : 23552011399

1. Latar Belakang
   
Kebocoran air merupakan masalah yang sering terjadi di rumah, gedung, maupun fasilitas umum. Jika tidak segera diketahui, kebocoran dapat menyebabkan pemborosan air, kerusakan pada bangunan, serta meningkatkan biaya penggunaan air. Oleh karena itu, diperlukan suatu sistem yang mampu mendeteksi kebocoran air secara otomatis sehingga penanganan dapat dilakukan dengan lebih cepat.
Perkembangan teknologi Internet of Things (IoT) memungkinkan berbagai perangkat elektronik saling terhubung melalui internet. Dengan memanfaatkan ESP32 sebagai mikrokontroler dan ThingSpeak sebagai platform penyimpanan data, informasi mengenai kondisi kebocoran air dapat dipantau secara real-time melalui jaringan internet.
Pada simulasi menggunakan Wokwi, sensor kebocoran air digantikan dengan potentiometer sebagai simulasi nilai analog sensor. Ketika nilai sensor melebihi batas yang telah ditentukan, ESP32 akan menyalakan LED dan buzzer sebagai indikator adanya kebocoran, kemudian mengirimkan data tersebut ke ThingSpeak untuk ditampilkan dalam bentuk grafik.

3. Tujuan

Merancang sistem pendeteksi kebocoran air berbasis IoT menggunakan ESP32.
Mensimulasikan pembacaan sensor menggunakan potentiometer pada Wokwi.
Mengirimkan data sensor ke ThingSpeak secara real-time melalui jaringan WiFi.
Memberikan peringatan menggunakan LED dan buzzer saat terdeteksi indikasi kebocoran air.

3. Alat dan Bahan (Wokwi)

ESP32 DevKit V1 1

Potentiometer (simulasi sensor air) 1

LED Merah 1

Buzzer 1 

Platform Wokwi 1

Akun ThingSpeak 1

4. ScreenShot Wokwi & ThingSpeak
   
<img width="1886" height="923" alt="Screenshot 2026-07-04 073033" src="https://github.com/user-attachments/assets/67fba563-e5de-4b2d-aaf9-206abca7f4f6" />
<img width="1582" height="657" alt="Screenshot 2026-07-04 072954" src="https://github.com/user-attachments/assets/2597cb97-c3a9-4c06-b1d4-3cc00748c374" />

<img width="1890" height="901" alt="Screenshot 2026-07-04 073248" src="https://github.com/user-attachments/assets/d99d51c3-d514-46d8-8fdf-75bf5e94309a" />
<img width="1512" height="632" alt="Screenshot 2026-07-04 073303" src="https://github.com/user-attachments/assets/78b1efea-f668-43ce-9859-a03e5ba0d2b3" />

5. Link WokWi
https://wokwi.com/projects/468573347712949249

6. Link Youtube (Video Demo)
   https://youtu.be/IYm_fPIXIZk
