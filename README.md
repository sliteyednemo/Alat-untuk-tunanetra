# Alat-untuk-tunanetra
S.W.E.E.T.S. (Seeing With Ears End Terrible Solitary)



Jadi, tanggal 16 januari. Kebetulan hujan dan saya lagi ngelamun ngitung budget buat project prosthetic arm basis arduino. Dan terlalu risky buat maksain pake uang tabungan saya yang sedang kritis.

Dan tiba-tiba aja terlintas dipikiran saya gambaran orang buta lagi jalan bawa tongkat buat ngeraba jalannya. Lamunan itu berubah menjadi membandingkan cara jalan orang buta dengan orang normal, pemakai tongkat dan tidak.

Lalu timbul pertanyaan, gimana kalo ada alat yang bisa memberi tahu orang buta itu jarak aman jalan didepannya, semacam asisten pribadi yang selalu ada, semacam kera milik si buta dari goa hantu.

Setelah riset singkat, saya menemukan beberapa fakta bahwa ketika salah satu indera manusia tidak berfungsi maka indera lainnya akan lebih sensitif, orang buta sangat merasa dihargai ketika ada yang memberitahukan kondisi disekitarnya, dan tidak ada orang cacat yang mau di anggap cacat.

Maka, pas sekali.

Saya baru belajar sebuah sistem mikrokontroller yang sedikit banyak dibantu teman saya. Saya belajar memang seperti yang saya katakan diawal tadi, saya ingin membuat sebuah prosthetic arm karena bisa menggantikan lengan yang cacat akibat amputansi, membantu orang cacat, dan keren aja. Namun ide itu akhirnya tertunda terkendala budget. 

Kembali ke tunanetra, rancangan awal saya ingin menggunakan pixy camera dan ultrasonic sensor sebagai inputnya, esp8266 sebagai mikrokontroller, df player dan speaker sebagai outputnya. 

Namun, karena harga modul pixy camera relatif mahal untuk saya jadi saya hanya menggunakan ultrasonic sensor sebagai alat pengukur jaraknya toh juga pada akhirnya yang dapat dikonsumsi penggunanya hanya berupa suara. (Tapi, kalo pake pixy camera bisa face recognition, object recognition, dll. Cuman ya mahal bang.)

Mikrokontroller pilihan saya jatuh pada Lolin wemos esp8266, namun entah kenapa Lolin yang saya beli tidak dapat berfungsi dg baik, jadi saya menggunakan Arduino Uno yang memang sudah saya punya.



Untuk sementara waktu, Project ini saya anggap berhasil dan bekerja dengan baik. Tapi mungkin di waktu yang akan datang saya akan belajar tentang A.I. Camera untuk menambahkan input pada alat ini, agar pengguna bisa mengetahui ada benda apa yang berada di sekitarnya bukan hanya sebatas tahu batas aman untuk berjalan saja. 
