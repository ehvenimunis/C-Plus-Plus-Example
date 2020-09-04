/* 
#include Önişlemci Direktifi

C dilinde, daha önce değindiğimiz gibi, en çok kullanılan fonksiyonlar kütüphane 
dosyaları adı verilen .LIB uzantılı dosyalara yerleştirilmiştir. Bu dosyalarda yer 
alan kütüphane fonksiyonlarının prototipleri ise başlık dosyası adı verilen .H uzantılı 
dosyalarda yer alır.

#include direktifini kullanarak, başlık dosyalarında prototipleri yer alan fonksiyonları 
sizin programınızda yazılmış gibi kullanabilirsiniz.

Aşağıdaki satırı programınıza dahil ederseniz, conio.h başlık dosyası içinde 
prototipleri bulunan bütün kütüphane fonksiyonlarını, programınızda yazılmış gibi 
kullanabilirsiniz:


Eğer dosya adını < > işaretleri arasında tanımlarsanız, derleyici tanımladığınız 
dosyayı başlık dosyalarının içinde bulunduğu alt dizinde arar. Bu dizin genellikle
include alt dizinidir. Eğer dosya adını " " işaretleri arasında tanımlarsanız, 
derleyici tanımlanan dosyayı önce aktif dizinde, daha sonra diğer dizinlerde arar. 
" " işaretlerini kullandığınız zaman, eğer varsa, derleyici tanımladığınız dosyayı 
mutlaka bulur. Eğer sisteminizi uygun şekilde düzenlediyseniz, < > işaretlerini 
kullanmanız derleme zamanını kısaltır.

 */