cmd_drivers/hid/hid-topseed.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-topseed.ko drivers/hid/hid-topseed.o drivers/hid/hid-topseed.mod.o;  true
