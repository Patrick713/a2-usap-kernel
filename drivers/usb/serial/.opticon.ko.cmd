cmd_drivers/usb/serial/opticon.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/opticon.ko drivers/usb/serial/opticon.o drivers/usb/serial/opticon.mod.o;  true