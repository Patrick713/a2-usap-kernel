cmd_drivers/usb/serial/ipaq.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/ipaq.ko drivers/usb/serial/ipaq.o drivers/usb/serial/ipaq.mod.o;  true