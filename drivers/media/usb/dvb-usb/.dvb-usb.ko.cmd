cmd_drivers/media/usb/dvb-usb/dvb-usb.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/usb/dvb-usb/dvb-usb.ko drivers/media/usb/dvb-usb/dvb-usb.o drivers/media/usb/dvb-usb/dvb-usb.mod.o;  true
