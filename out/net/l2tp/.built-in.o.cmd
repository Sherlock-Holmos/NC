cmd_net/l2tp/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o net/l2tp/built-in.o net/l2tp/l2tp_core.o net/l2tp/l2tp_ppp.o net/l2tp/l2tp_ip.o net/l2tp/l2tp_netlink.o net/l2tp/l2tp_eth.o net/l2tp/l2tp_ip6.o ; scripts/mod/modpost net/l2tp/built-in.o
