cmd_drivers/usb/serial/symbolserial.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/symbolserial.ko drivers/usb/serial/symbolserial.o drivers/usb/serial/symbolserial.mod.o;  true