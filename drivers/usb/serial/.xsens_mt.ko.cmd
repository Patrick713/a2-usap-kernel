cmd_drivers/usb/serial/xsens_mt.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/usb/serial/xsens_mt.ko drivers/usb/serial/xsens_mt.o drivers/usb/serial/xsens_mt.mod.o;  true