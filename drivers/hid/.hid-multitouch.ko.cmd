cmd_drivers/hid/hid-multitouch.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-multitouch.ko drivers/hid/hid-multitouch.o drivers/hid/hid-multitouch.mod.o;  true
