cmd_drivers/hid/hid-led.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-led.ko drivers/hid/hid-led.o drivers/hid/hid-led.mod.o;  true
