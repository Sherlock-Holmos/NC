cmd_net/bridge/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o net/bridge/built-in.o net/bridge/bridge.o net/bridge/br_netfilter.o net/bridge/netfilter/built-in.o ; scripts/mod/modpost net/bridge/built-in.o
