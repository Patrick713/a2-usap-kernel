cmd_drivers/input/touchscreen/ili210x.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/input/touchscreen/ili210x.ko drivers/input/touchscreen/ili210x.o drivers/input/touchscreen/ili210x.mod.o;  true
