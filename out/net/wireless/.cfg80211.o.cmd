cmd_net/wireless/cfg80211.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o net/wireless/cfg80211.o net/wireless/core.o net/wireless/sysfs.o net/wireless/radiotap.o net/wireless/util.o net/wireless/reg.o net/wireless/scan.o net/wireless/nl80211.o net/wireless/mlme.o net/wireless/ibss.o net/wireless/sme.o net/wireless/chan.o net/wireless/ethtool.o net/wireless/mesh.o net/wireless/ap.o net/wireless/trace.o net/wireless/ocb.o net/wireless/regdb.o ; scripts/mod/modpost net/wireless/cfg80211.o
