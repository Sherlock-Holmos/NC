cmd_drivers/acpi/acpi.o := /home/sherlock/gcc64/bin/aarch64-linux-gnu-ld -EL    -r -o drivers/acpi/acpi.o drivers/acpi/osl.o drivers/acpi/utils.o drivers/acpi/reboot.o drivers/acpi/nvs.o drivers/acpi/wakeup.o drivers/acpi/device_sysfs.o drivers/acpi/device_pm.o drivers/acpi/bus.o drivers/acpi/glue.o drivers/acpi/scan.o drivers/acpi/resource.o drivers/acpi/acpi_processor.o drivers/acpi/processor_core.o drivers/acpi/ec.o drivers/acpi/pci_root.o drivers/acpi/pci_link.o drivers/acpi/pci_irq.o drivers/acpi/acpi_lpss.o drivers/acpi/acpi_apd.o drivers/acpi/acpi_platform.o drivers/acpi/acpi_pnp.o drivers/acpi/int340x_thermal.o drivers/acpi/power.o drivers/acpi/event.o drivers/acpi/sysfs.o drivers/acpi/property.o drivers/acpi/debugfs.o drivers/acpi/acpi_lpat.o drivers/acpi/gsi.o ; scripts/mod/modpost drivers/acpi/acpi.o