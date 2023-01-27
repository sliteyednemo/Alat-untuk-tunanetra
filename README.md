# Alat-untuk-tunanetra
S.W.E.E.T.S. (Seeing With Ears End Terrible Solitary)



Jadi, tanggal 16 januari. Kebetulan hujan dan saya lagi ngelamun ngitung budget buat project prosthetic arm basis arduino. Dan terlalu risky buat maksain pake uang tabungan saya yang sedang kritis.

Dan tiba-tiba aja terlintas dipikiran saya gambaran seorang tunanetra lagi jalan bawa tongkat buat ngeraba jalannya. Lamunan itu berubah menjadi membandingkan cara jalan tunanetra dengan orang normal, pemakai tongkat dan tidak. Karena menurut saya ada beberapa kerugian seorang tunanetra menggunakan tongkat yaitu tungkat yang dibenturkan berpotensi merusak barang disekitar dan tongkat tsb berpotensi tidak sengaja memukul orang sekitar ketika orang sekitar tidak mengetahui bahwa ada tunanetra disekitarnya.

Lalu timbul pertanyaan, gimana kalo ada alat yang bisa memberi tahu orang buta itu jarak aman jalan didepannya, semacam asisten pribadi yang selalu ada, "semacam kera milik si buta dari goa hantu".

Setelah riset singkat, saya menemukan beberapa fakta bahwa ketika salah satu indera manusia tidak berfungsi maka indera lainnya akan lebih sensitif, orang buta sangat merasa dihargai ketika ada yang memberitahukan kondisi disekitarnya, dan juga tidak ada orang dengan berkekurangan yang mau di anggap berkekurangan (mereka ingin dianggap sama).

Maka, pas sekali.

Saya baru belajar sebuah sistem mikrokontroller yang sedikit banyak dibantu teman saya. Saya belajar memang seperti yang saya katakan diawal tadi, saya ingin membuat sebuah Prosthetic Arm atau lengan prostetik karena bisa menggantikan lengan orang yang difabel akibat amputansi, dengan tujuan membantu orang difabel, dan karena "keren aja" kalo ada orang pake lengan robotik. Namun ide itu akhirnya tertunda terkendala budget. 

Kembali ke tunanetra, rancangan awal saya ingin menggunakan modul pixy camera dan ultrasonic sensor sebagai inputnya, esp8266 sebagai mikrokontroller, df player dan speaker dari headset sebagai outputnya. 

Namun, karena harga modul pixy camera relatif mahal untuk saya, jadi saya hanya menggunakan ultrasonic sensor (setidaknya untuk saat ini) sebagai alat pengukur jaraknya, toh juga pada akhirnya yang dapat dikonsumsi penggunanya hanya berupa suara. (Tapi, kalo pake pixy camera bisa face recognition, object recognition, dll. Cuman ya mahal bang.)

Mikrokontroller pilihan saya jatuh pada Lolin wemos esp8266, namun entah kenapa Lolin yang saya beli tidak dapat berfungsi dg baik, jadi saya menggunakan Arduino Uno yang memang sudah saya punya (kalo mau pake arduino pro mini atau arduino nano juga bisa sepertinya, tinggal setting portnya aja).

.....

Untuk sementara waktu, Project ini saya anggap berhasil dan bekerja dengan baik (Prototype). Tapi mungkin di waktu yang akan datang saya akan belajar tentang A.I. Camera untuk menambahkan input pada alat ini, agar pengguna bisa mengetahui ada benda apa yang berada di sekitarnya bukan hanya sebatas tahu batas aman untuk berjalan saja. Juga memperkecil ukuran alatnya agar lebih nyaman ketika dipakai.

Sekian,
