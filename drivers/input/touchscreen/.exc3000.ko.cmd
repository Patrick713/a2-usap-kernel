cmd_drivers/input/touchscreen/exc3000.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/input/touchscreen/exc3000.ko drivers/input/touchscreen/exc3000.o drivers/input/touchscreen/exc3000.mod.o;  true