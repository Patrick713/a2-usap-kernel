cmd_drivers/hid/hid-apple.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-apple.ko drivers/hid/hid-apple.o drivers/hid/hid-apple.mod.o;  true
