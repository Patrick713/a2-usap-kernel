cmd_drivers/usb/serial/oti6858.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/oti6858.ko drivers/usb/serial/oti6858.o drivers/usb/serial/oti6858.mod.o;  true