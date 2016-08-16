
javac Hello.java


gcc -o libhello.so -shared -Wl,-soname,libhello.so  -I/usr/lib/jvm/default-java/include/ -I/usr/local/java/include/linux Hello.c -static -lc


export LD_LIBRARY_PATH=./
java Hello

