cmd_drivers/w1/slaves/w1_ds2406.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/w1/slaves/w1_ds2406.ko drivers/w1/slaves/w1_ds2406.o drivers/w1/slaves/w1_ds2406.mod.o;  true