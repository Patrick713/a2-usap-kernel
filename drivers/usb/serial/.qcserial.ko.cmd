cmd_drivers/usb/serial/qcserial.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/qcserial.ko drivers/usb/serial/qcserial.o drivers/usb/serial/qcserial.mod.o;  true