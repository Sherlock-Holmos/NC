cmd_drivers/bluetooth/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/bluetooth/built-in.o drivers/bluetooth/bluetooth-power.o drivers/bluetooth/btfm_slim.o drivers/bluetooth/btfm_slim_codec.o drivers/bluetooth/btfm_slim_wcn3990.o ; scripts/mod/modpost drivers/bluetooth/built-in.o