cmd_drivers/hid/hid-roccat-arvo.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-roccat-arvo.ko drivers/hid/hid-roccat-arvo.o drivers/hid/hid-roccat-arvo.mod.o;  true