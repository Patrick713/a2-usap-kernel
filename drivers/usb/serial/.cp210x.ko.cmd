cmd_drivers/usb/serial/cp210x.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/cp210x.ko drivers/usb/serial/cp210x.o drivers/usb/serial/cp210x.mod.o;  true
