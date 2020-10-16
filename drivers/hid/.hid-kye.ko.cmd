cmd_drivers/hid/hid-kye.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-kye.ko drivers/hid/hid-kye.o drivers/hid/hid-kye.mod.o;  true
