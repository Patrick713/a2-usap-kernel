cmd_drivers/w1/wire.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/w1/wire.ko drivers/w1/wire.o drivers/w1/wire.mod.o;  true
