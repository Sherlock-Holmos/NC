cmd_drivers/pci/built-in.o :=  /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/pci/built-in.o drivers/pci/access.o drivers/pci/bus.o drivers/pci/probe.o drivers/pci/host-bridge.o drivers/pci/remove.o drivers/pci/pci.o drivers/pci/pci-driver.o drivers/pci/search.o drivers/pci/pci-sysfs.o drivers/pci/rom.o drivers/pci/setup-res.o drivers/pci/irq.o drivers/pci/vpd.o drivers/pci/setup-bus.o drivers/pci/vc.o drivers/pci/proc.o drivers/pci/slot.o drivers/pci/quirks.o drivers/pci/msi.o drivers/pci/setup-irq.o drivers/pci/pci-acpi.o drivers/pci/pci-label.o drivers/pci/syscall.o drivers/pci/of.o drivers/pci/host/built-in.o ; scripts/mod/modpost drivers/pci/built-in.o
