cmd_drivers/input/serio/serport.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/input/serio/serport.ko drivers/input/serio/serport.o drivers/input/serio/serport.mod.o;  true