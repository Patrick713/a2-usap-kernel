cmd_drivers/usb/serial/aircable.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/aircable.ko drivers/usb/serial/aircable.o drivers/usb/serial/aircable.mod.o;  true
