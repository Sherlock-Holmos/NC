cmd_drivers/spmi/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/spmi/built-in.o drivers/spmi/spmi.o drivers/spmi/spmi-pmic-arb.o drivers/spmi/virtspmi-pmic-arb.o ; scripts/mod/modpost drivers/spmi/built-in.o
