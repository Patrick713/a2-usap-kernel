cmd_drivers/hid/hid-belkin.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-belkin.ko drivers/hid/hid-belkin.o drivers/hid/hid-belkin.mod.o;  true
