cmd_drivers/bcma/bcma.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/bcma/bcma.o drivers/bcma/main.o drivers/bcma/scan.o drivers/bcma/core.o drivers/bcma/sprom.o drivers/bcma/driver_chipcommon.o drivers/bcma/driver_chipcommon_pmu.o drivers/bcma/driver_chipcommon_b.o drivers/bcma/driver_pci.o drivers/bcma/driver_pcie2.o drivers/bcma/host_pci.o ; scripts/mod/modpost drivers/bcma/bcma.o