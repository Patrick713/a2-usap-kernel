cmd_drivers/bcma/bcma.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/bcma/bcma.ko drivers/bcma/bcma.o drivers/bcma/bcma.mod.o;  true
