cmd_drivers/staging/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/staging/built-in.o drivers/staging/staging.o drivers/staging/media/built-in.o drivers/staging/rtl8192u/built-in.o drivers/staging/iio/built-in.o drivers/staging/android/built-in.o ; scripts/mod/modpost drivers/staging/built-in.o