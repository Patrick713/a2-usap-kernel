cmd_drivers/regulator/fixed.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/regulator/fixed.ko drivers/regulator/fixed.o drivers/regulator/fixed.mod.o;  true