cmd_fs/sdfat/sdfat_fs.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o fs/sdfat/sdfat_fs.o fs/sdfat/sdfat.o fs/sdfat/core.o fs/sdfat/core_fat.o fs/sdfat/core_exfat.o fs/sdfat/api.o fs/sdfat/blkdev.o fs/sdfat/fatent.o fs/sdfat/amap_smart.o fs/sdfat/cache.o fs/sdfat/dfr.o fs/sdfat/nls.o fs/sdfat/misc.o fs/sdfat/mpage.o fs/sdfat/extent.o fs/sdfat/xattr.o ; scripts/mod/modpost fs/sdfat/sdfat_fs.o