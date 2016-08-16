
javac Hello.java

echo "Generate Header file"
javah Hello

echo "Creat so file"
#32bit
#gcc -o libhello.so -shared -Wl,-soname,libhello.so  -I/usr/lib/jvm/default-java/include/ -I/usr/local/java/include/linux Hello.c -static -lc


#64 bit
gcc -o libhello.so -fPIC -shared -Wl,-soname,libhello.so  -I/usr/lib/jvm/default-java/include/ -I/usr/local/java/include/linux Hello.c -Bstatic -lc

echo "Verify result"
export LD_LIBRARY_PATH=./
java Hello

